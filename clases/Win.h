//
// Created by Camila on 24/6/2020.
//

#ifndef RAYLIBTEMPLATE_WIN_H
#define RAYLIBTEMPLATE_WIN_H
#include "State.h"

class Win: public State {
private:
    Texture2D Background;
public:

    ~Win() override;

    void loop() override;
};
#endif //RAYLIBTEMPLATE_WIN_H
