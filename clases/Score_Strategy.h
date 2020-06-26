/**
* @file Score_Strategy.cpp
* @Autor Micaela Vargas
* @Autor Camila Londero
* @date 26/06/2020
* @brief implementac
*/

#ifndef RAYLIBTEMPLATE_SCORE_STRATEGY_H
#define RAYLIBTEMPLATE_SCORE_STRATEGY_H

class Score_Strategy
{
public:
/**
* @brief funcion virtual que sera utilizada por los otros strategy
*/
    virtual int score (int puntos) = 0;
};
#endif //RAYLIBTEMPLATE_SCORE_STRATEGY_H