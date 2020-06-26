/**
* @file BadCoin_Strategy.cpp
* @Autor Micaela Vargas
* @Autor Camila Londero
* @date 26/06/2020
*/

#include "BadCoin_Strategy.h"

int BadCoin_Strategy:: score (int puntos){
    puntos -= 2;
    return puntos;
}