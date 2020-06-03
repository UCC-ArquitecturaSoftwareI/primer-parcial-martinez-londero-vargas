#include "Map.h"
#include <iostream>

#include <string>

Map::Map(std::string file) {
    tson::Tileson parser;
    map = parser.parse(fs::path("resources/Level/" + file));
    //dibujo =LoadTexture(img.c_str());
    if (map.getStatus() == tson::ParseStatus::OK) {

        for (auto &tileset : map.getTilesets()) {
            map_text = LoadTexture(("resources/Level/" + tileset.getImage().string()).c_str());
            map_tileset = &tileset;
        }


        auto objs = map.getLayer("Player");
        tson::Object *player = objs->firstObj("player");
        player_init_pos.x = player->getPosition().x;
        player_init_pos.x = player->getPosition().y;

        std::cout << "Vida" << player->get<int>("vida") << std::endl;
        for (auto &obj : objs->getObjects()) {
            std::cout << "Nombre: " << obj.getName() << std::endl;
            std::cout << " Pos" << obj.getPosition().x << std::endl;

        }

        // Leo pisos
        auto piso = map.getLayer("Piso");
        for (auto &obj : piso->getObjects()) {
            std::cout << "Nombre: " << obj.getName() << std::endl;
            std::cout << "Plataforma?" << obj.get<bool>("plataforma") << std::endl;
            pisos.push_back({static_cast<float>(obj.getPosition().x),
                             static_cast<float>(obj.getPosition().y),
                             static_cast<float>(obj.getSize().x),
                             static_cast<float>(obj.getSize().y)});
        }
    }
}


//  x=0;
// y=0;


int Map::getX() {
    return x;
}

void Map::setX(int x) {
    Map::x += x;
}

int Map::getY() {
    return y;
}

void Map::setY(int y) {
    Map::y += y;
}

void Map::dibujar() {
    Rectangle tile_rec;
    tile_rec.x = 0;
    tile_rec.y = 0;
    tile_rec.width = map.getTileSize().x;
    tile_rec.height = map.getTileSize().y;

    int firstId = map_tileset->getFirstgid();
    int columns = map_tileset->getColumns();
    int margin = map_tileset->getMargin();
    int space = map_tileset->getSpacing();

    auto &c = map.getBackgroundColor();
    ClearBackground({c.r, c.g, c.b, c.a});

    for (auto nombre: {"Fondo", "Frente1", "Frente2", "Frente3"}) {
        auto *layer = map.getLayer(nombre);
        for (auto&[pos, tile]: layer->getTileData()) {
            if (tile != nullptr) {
                tson::Vector2f position = {(float) std::get<0>(pos) * map.getTileSize().x,
                                           (float) std::get<1>(pos) * map.getTileSize().y};
                int baseTilePosition = (tile->getId() - firstId);

                int tileModX = (baseTilePosition % columns);
                int currentRow = (baseTilePosition / columns);
                int offsetX = tileModX * (map.getTileSize().x + space) + margin;
                int offsetY = currentRow * (map.getTileSize().y + space + margin);

                tile_rec.x = offsetX;
                tile_rec.y = offsetY;
                DrawTextureRec(map_text, tile_rec, {position.x, position.y}, WHITE);

            }
        }


    }


}

/*

#include "Map.h"
#include <string>

Map::Map (std::string img)
{
    dibujo =LoadTexture(img.c_str());
    x=0;
    y=0;
}

int Map::getX() {
    return x;
}

void Map::setX(int x) {
    Map::x += x;
}

int Map::getY() {
    return y;
}

void Map::setY(int y) {
    Map::y += y;
}

void Map::dibujar() {
    DrawTexture(dibujo,x,y,WHITE);
}
 }
*/
