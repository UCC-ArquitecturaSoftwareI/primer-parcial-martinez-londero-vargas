//
// Created by Camila on 23/6/2020.
//

#ifndef RAYLIBTEMPLATE_GAME_H
#define RAYLIBTEMPLATE_GAME_H

#include "State.h"

class Game: public State{
public:
    Game();

public:
    void loop() override;
};

#endif //RAYLIBTEMPLATE_GAME_H
