//
// Created by Camila on 23/6/2020.
//

#ifndef RAYLIBTEMPLATE_GAMEOVER_H
#define RAYLIBTEMPLATE_GAMEOVER_H

#include "State.h"

class GameOver: public State{
private:
     Texture2D Background;
public:

    ~GameOver() override;

    void loop() override;
};

#endif //RAYLIBTEMPLATE_GAMEOVER_H
