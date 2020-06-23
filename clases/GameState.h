//
// Created by Camila on 23/6/2020.
//

#ifndef RAYLIBTEMPLATE_GAMESTATE_H
#define RAYLIBTEMPLATE_GAMESTATE_H

#include "Menu.h"
#include "EndGame.h"
#include "Singleton.h"

class GameState{

private:

   //Menu *menu;
   //EndGame *End;

public:

    GameState();
    void initMenu();
    void StartGame();
    void EndGame();
    void GameOver();

};

#endif //RAYLIBTEMPLATE_GAMESTATE_H
