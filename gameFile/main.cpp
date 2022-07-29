#include "prototypes.hpp"
#include "defines.hpp"
#include <iostream>
#include "helper_code.hpp"
//#include "helper_code.cpp"
#include <stdio.h>
#include <algorithm>
#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

//prototypes
//void mainMenuLoop();
//bool mainMenu(string);

int main(int argc, char *argv[]){
    char maze[ROW][COL];
    char move;
    int width = 0, height = 0, coin = 0, level;
    int player_x = 0, player_y = 0;
    std::string file4 = "map-difficult.dat", file1 = "map-easy.dat", file2 = "map-medium.dat", file3 ="map-hard.dat";
    string name;
    string choice;
    cout << "***** Welcome to The Maze *****" << endl;
    cout << "Hit Start/S to play or Quit/Q to quit the game" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cout << endl;
    if(choice == "Q" or choice == "QUIT"){
        cout << "Ok! quiting!";
    }else if(choice == "s" or choice == "START"){
        cout << "Please selelect the map you would like to play" << endl;
        cout <<"1. Easy" << endl;
        cout <<"2. Medium" << endl;
        cout <<"3. Hard" << endl;
        cout <<"4. Never win map"<<endl;
        cout <<"Enter your choice: ";
        cin >> level;
        if(level == 1){
            name = file1;
        }else if(level == 2){
            name = file2;
        }else if(level == 3){
            name = file3;
        }else if(level == 4){
            name = file4;
        }else{
            cout << "Extra difficult map has selected " << endl;
            name = file4;
        }
        cout << endl;
        loadMapFile(name,maze, width, height);
        //renderWall(maze, width, height, player_x, player_y);
        //cout << "x " << player_x << " y " << player_y << endl;
        bool player = true;
        
        while(player){
            cout << "Gold: " << coin << endl;
            cout << "your turn ";
            move = getch();
            
            cout << endl;
            renderPlayer(maze, player_x, player_y);
            get_player_move(move, maze, player_x, player_y, player, coin);
            if(!checkPlayerDead(maze, player_x, player_y)){
                if(checkPlayerWin(maze, player_x, player_y)){
                    cout << "You Wonnn!!!" << endl;
                }
                
                renderWall(maze, width, height, player_x, player_y);
            }
            cout << endl;
        }
        cout << "Total Gold " << coin << endl;
        cout<<"Game Over!";
        
    }else{
        cout << "Invalid input!" << endl;
        cout << endl;
    }
    
    return 0;
}



/***
void mainMenuLoop(){
    string choice;
    //do{
        cout << "***** Welcome to The Maze *****" << endl;
        cout << "Hit Start/S to play or Quit/Q to quit the game" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;
        mainMenu(choice);
    //}while(mainMenu(choice));
}

bool mainMenu(string choice){
    transform(choice.begin(), choice.end(), choice.begin(), ::toupper);
    if(choice == "Q" or choice == "QUIT"){
        cout << "Ok! quiting!";
        return false;
    }else if(choice == "S" or choice == "START"){
        std::string file = "map.txt";
        loadMapFile(file);
        
        return true;
    }else{
        cout << "Invalid input!" << endl;
        cout << endl;
    }
    return true;
}
***/


