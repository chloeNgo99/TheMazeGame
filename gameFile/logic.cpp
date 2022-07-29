#include <stdio.h>
#include <string>
#include "helper_code.hpp"
//#include "helper_code.cpp"
#include <iostream>
#include "defines.hpp"

const char PLAYER('P');
const char SNAKE('S');
const char COIN('C');
const char WALL('X');
const char EXIT('O');
const char SPACE(' ');

bool checkPlayerDead(char (&arr)[ROW][COL], int& x, int& y){
    if(arr[x][y] == SNAKE){
        return true;
    }
    return false;
}

bool doDeathEnd(char (&arr)[ROW][COL], int& x, int& y){
    if(arr[x][y] == 'X'){
        return true;
    }
    return false;
}

//need to improve
bool checkPlayerGold(char (&arr)[ROW][COL], int& x, int& y){
    static int gold = 0;
    if(arr[x][y] == COIN){
        arr[x][y] = SPACE;
        return true;
    }
    return false;
}

bool checkPlayerWin(char (&arr)[ROW][COL], int& x, int& y){
    if(arr[x][y] == EXIT){
        return true;
    }
    return false;
}



