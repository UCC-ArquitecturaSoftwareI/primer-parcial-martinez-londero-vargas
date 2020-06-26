#ifndef RAYLIBTEMPLATE_MENU_H
#define RAYLIBTEMPLATE_MENU_H

#include <raylib.h>
#include "State.h"


class Menu : public State {
private:
    Texture2D Button;
    Texture2D Background;
    Rectangle btnBounds;
    Vector2 mousePoint;
public:
    Menu();

    ~Menu() override;

    void loop() override;
};


#endif //RAYLIBTEMPLATE_MENU_H

