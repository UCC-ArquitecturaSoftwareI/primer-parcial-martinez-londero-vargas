//
// Created by Camila on 23/6/2020.
//

#ifndef RAYLIBTEMPLATE_ENDGAME_H
#define RAYLIBTEMPLATE_ENDGAME_H

#include "State.h"

class EndGame: public State{
private:

public:
    void draw();

    ~EndGame() override;

    void loop() override;
};

#endif //RAYLIBTEMPLATE_ENDGAME_H
