#include <iostream>
#include "fucns.h"
#include <string>

using namespace std;

void newGame()
{
    display_world();

    char playeropt;

    while (true)
    {
        char id;

        while (true)
        {
            cout << "Which Country would you like to play as ? " << endl;
            cout << ">>";

            cin >> id;

            int c = countryDetails(id);

            if (c == 1)
            {
                continue;
            }
            
            char opt;

            while (true && c == 0)
            {
                cout << "Do you want to proceed to govern this country? (y/n) ";
                cin >> opt;

                if (tolower(opt) != 'y' && tolower(opt) != 'n')
                {
                    cout << "Invalid :(" << endl;
                }

                else
                {
                    break;
                }

            }
            if (tolower(opt) == 'y' && c == 0)
            {
                getCountry(id).setPlayer();
                clearConsole();
                cout << "Player set" << endl;
                startGame();
                return;
            }
        }


        
        
    }

}

// Creating a common prompt

void prompt(string &input)
{
    cout << ">>";
    cin >> input;
}

// Starting the game for the first time

void startGame()
{
    while (true)
    {
        string input;
        prompt(input);

        tolower(input);

    }
}