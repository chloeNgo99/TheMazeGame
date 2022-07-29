#include "prototypes.hpp"
#include "helper_code.hpp"
//#include "helper_code.cpp"
#include "defines.hpp"
#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>

using std::string;
using std::endl;
using std::cout;
using std::cin;

//create array

bool loadMapFile(string file_name, char (&arr)[ROW][COL], int& width, int& height)
{
    
    std::ifstream file;
    char next;
    int x = 0, y = 0;
    file.open(file_name);
    if(!file){
        cout << "Cannot open file";
    }else{
        while(file.get(next)){
            if(!file.eof())
            {
                if(next != '\n'){
                    arr[x][y] = next;
                    x++;
                    width = x;
                }else if(next == '\n'){
                    arr[x][y] = next;
                    y++;
                    x = 0;
                    height++;
                }
            }else{
                cout << "Error while loading file" << endl;
                return false;
            }
        }
        
        return true;
    }
    
    return false;
}




