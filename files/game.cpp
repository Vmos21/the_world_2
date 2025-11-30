#include <iostream>
#include "fucns.h"
#include "services.h"
#include <string>
#include <algorithm>

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

        transform(input.begin(), input.end(), input.begin(), [](char x){return tolower(x);});

        if (input == "exit")
        {
            return;
        }

        else if (input == "clear")
        {
            clearConsole();
        }

        else if (input == "countrydet")
        {
            char id;
            cout << "Enter ID:";
            cin >> id;

            countryDetails(id);
        }

        else if (input == "reser dores")
        {
            playerRes();
        }

        else if (input == "reser showres")
        {
            return;
        }

    }
}