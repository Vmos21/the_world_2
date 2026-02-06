// Header Files

#include <iostream>
#include "fucns.h"
#include "agent.h"
#include <cstdlib>
#include <stdexcept>
#include <vector>
#include <string>

using namespace std;

// Definitions

int ROW;
int COL;

country countArr[7] = {
    country("North America", '#'),
    country("South America", '@'),
    country("Europe", '$'),
    country("Soviet States", '&'),
    country("Asia", '*'),
    country("Africa", '%'),
    country("Oceania", '?')
};

// World Map

/*
vector<string> world = 
{
    "...##.$..$$&&&&&&&&.....", ".####.$...$&&&&&&&&&....", "..###...$$$*&&&*&*&**...", "..###...$$$*********.*..", "..##.....$.***.****.....", "..##........*...*.*.....", "...#.....%%.....*.**....",
    "...@@...%%%........***..", "...@@...%%%%............", "...@@...%%%%........??..", "....@....%%........????.", "....@....%%........????.", ".........%%........?..??", "........................"
};
*/

vector<string> world;

// Functions

void display_world()
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (world[i][j] == '#')
            {
                cout << " " << "\033[1;31m"<< world[i][j] << "\033[0m" << " ";
            }

            else if (world[i][j] == '@')
            {
                cout << " " << "\033[1;32m"<< world[i][j] << "\033[0m" << " ";
            }

            else if (world[i][j] == '$')
            {
                cout << " " << "\033[1;33m"<< world[i][j] << "\033[0m" << " ";
            }

            else if (world[i][j] == '%')
            {
                cout << " " << "\033[1;34m"<< world[i][j] << "\033[0m" << " ";
            }

            else if (world[i][j] == '*')
            {
                cout << " " << "\033[1;35m"<< world[i][j] << "\033[0m" << " ";
            }

            else if (world[i][j] == '?')
            {
                cout << " " << "\033[1;36m"<< world[i][j] << "\033[0m" << " ";
            }
            
            else if (world[i][j] == '&')
            {
                cout << " " << "\033[1;30m"<< world[i][j] << "\033[0m" << " ";
            }

            else
            {
                cout << " " << "\033[1;37m"<< world[i][j] << "\033[0m" << " ";
            }
        }

        cout << "\n";
    }
}

country& getCountry(char id)
{
    for (country &c: countArr)
    {
        if (id == c.getId())
        {
            return c;
        }
    }
    
    throw runtime_error("Not Found");
}

int countryDetails(char id)
{
    try 
    {
        displayCountry(getCountry(id));
        return 0;
    }

    catch (const std::exception& e)
    {
        cout << "The country Does not exist :(" << endl;
        return 1;
    }
}

void clearConsole()
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}