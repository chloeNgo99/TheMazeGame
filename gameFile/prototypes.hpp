#include "defines.hpp"
#include <iostream>
#include "helper_code.hpp"

bool loadMapFile (std::string file, char (&arr)[ROW][COL], int& width, int& height);
void gotoxy (short x, short y);
bool checkPlayerDead (char (&arr)[ROW][COL], int& x, int& y);
bool doDeathEnd (char (&arr)[ROW][COL], int& x, int& y);
int checkPlayerGold (char (&arr)[ROW][COL], int& x, int& y);
bool checkPlayerWin (char (&arr)[ROW][COL], int& x, int& y);
void get_player_move(char input, char (&maze)[ROW][COL], int& x, int& y, bool& player, int& coin);
void renderPlayer(char (&arr)[ROW][COL],int& x, int& y);
void renderWall(char (&arr)[ROW][COL], int& width, int& height, int& player_x, int& player_y);

