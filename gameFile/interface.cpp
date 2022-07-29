#include "prototypes.hpp"
#include "defines.hpp"
#include <iostream>
#include "helper_code.hpp"
//#include "helper_code.cpp"


using std::string;
using std::endl;
using std::cout;

//defining game symbols
//void render_game();

void get_player_move(char input, char (&maze)[ROW][COL], int& x, int& y, bool& player, int& coin){
        //static int coin = 0;
        //input = getch();
        int temp_x = x, temp_y = y;
        
            switch(input){
                case 'w':
                    temp_y--;
                    if(doDeathEnd(maze,temp_x,temp_y) == true || checkPlayerDead(maze,temp_x,temp_y) == true){
                        if(doDeathEnd(maze,temp_x,temp_y)){
                            cout << "You heading to walls" <<endl;
                            maze[x][y] = 'P';
                            break;
                         }else if(checkPlayerDead(maze,temp_x,temp_y)){
                            cout<< "You're dead" << endl;
                            player = false;
                            break;
                            //print menu here
                        }
                    }
                    
                    if(checkPlayerGold(maze,temp_x,temp_y)){
                        coin++;
                        //cout << "gold: " << coin << endl;
                    }
                    if(checkPlayerWin(maze,temp_x,temp_y)){
                        cout << "You Win!!!!!" << endl;
                        player = false;
                        break;
                        //print menu here
                    }
                    y--;
                    maze[x][y] = 'P';
                    //cout << x << " " << y << endl;
                break;
                
                case 's':
                    temp_y++;
                    if(doDeathEnd(maze,temp_x,temp_y) == true || checkPlayerDead(maze,temp_x,temp_y) == true){
                        if(doDeathEnd(maze,temp_x,temp_y)){
                            cout << "You heading to walls" <<endl;
                            maze[x][y] = 'P';
                            break;
                         }else if(checkPlayerDead(maze,temp_x,temp_y)){
                            cout<< "You're dead" << endl;
                            player = false;
                            break;
                            //print menu here
                        }
                    }
                    if(checkPlayerGold(maze,temp_x,temp_y)){
                        coin++;
                        //cout << "gold: " << coin << endl;
                    }
                    if(checkPlayerWin(maze,temp_x,temp_y)){
                        cout << "You Win!!!!!" << endl;
                        player = false;
                        break;
                        //print menu here
                    }
                    y++;
                    maze[x][y] = 'P';
                    //cout << x << " " << y << endl;
                break;
                
                case 'a':
                    temp_x--;
                    if(doDeathEnd(maze,temp_x,temp_y) == true || checkPlayerDead(maze,temp_x,temp_y) == true){
                        if(doDeathEnd(maze,temp_x,temp_y)){
                            cout << "You heading to walls" <<endl;
                            maze[x][y] = 'P';
                            break;
                         }else if(checkPlayerDead(maze,temp_x,temp_y)){
                            cout<< "You're dead" << endl;
                            player = false;
                            break;
                            //print menu here
                        }
                    }
                    if(checkPlayerGold(maze,temp_x,temp_y)){
                        coin++;
                        //cout << "gold: " << coin << endl;
                    }
                    if(checkPlayerWin(maze,temp_x,temp_y)){
                        cout << "You Win!!!!!" << endl;
                        player = false;
                        break;
                        //print menu here
                    }
                    x--;
                    maze[x][y] = 'P';
                    //cout << x << " " << y << endl;
                break;
                
                case 'd':
                temp_x++;
                    if(doDeathEnd(maze,temp_x,temp_y) == true || checkPlayerDead(maze,temp_x,temp_y) == true){
                        if(doDeathEnd(maze,temp_x,temp_y)){
                            cout << "You heading to walls" <<endl;
                            maze[x][y] = 'P';
                            break;
                         }else if(checkPlayerDead(maze,temp_x,temp_y)){
                            cout<< "You're dead" << endl;
                            player = false;
                            break;
                            //print menu here
                        }
                    }
                    if(checkPlayerGold(maze,temp_x,temp_y)){
                        coin++;
                        //cout << "gold: " << coin << endl;
                    }
                    if(checkPlayerWin(maze,temp_x,temp_y)){
                        cout << "You Win!!!!!" << endl;
                        player = false;
                        break;
                        //print menu here
                    }
                    x++;
                    maze[x][y] = 'P';
                    //cout << x << " " << y << endl;
                break;
            }
        
        
}

void renderPlayer(char (&arr)[ROW][COL], int& x, int& y){
    int temp_x = x, temp_y = y;
    arr[temp_x][temp_y] = ' ';
}

void renderWall(char (&arr)[ROW][COL], int& width, int& height, int& player_x, int& player_y){
    for(int i = 0; i<= height; i++){
        for(int j = 0; j < width; j++){
            if(arr[i][j] == 'P'){
                player_x = i;
                player_y = j;
            }
            cout << arr[j][i];
        }
        cout<< endl;
    }
}





    


    
    