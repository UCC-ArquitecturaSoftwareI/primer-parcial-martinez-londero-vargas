//
// Created by Camila on 22/6/2020.
//

#ifndef RAYLIBTEMPLATE_ENEMYFACTORY_H
#define RAYLIBTEMPLATE_ENEMYFACTORY_H

#include <map>
#include "Animator.h"
class EnemyFactory{

    map<int, string> pool;
public:
    Enemy getEnemy(Animator a){
        auto textura = pool.find(a.getTextura());
        return Enemy(id,&textura->second);
    }

    void addTexture(int id, Texture2D tx){
        pool.insert((id,tx));
    }

};

#endif //RAYLIBTEMPLATE_ENEMYFACTORY_H
