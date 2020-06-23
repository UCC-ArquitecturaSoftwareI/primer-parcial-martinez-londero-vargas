//
// Created by Camila on 23/6/2020.
//

#ifndef RAYLIBTEMPLATE_GAMESTATE_H
#define RAYLIBTEMPLATE_GAMESTATE_H

#include "State.h"

class GameState: public State{
public:
    GameState();

public:
    void loop() override;
};

#endif //RAYLIBTEMPLATE_GAMESTATE_H
