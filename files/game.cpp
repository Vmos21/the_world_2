#include <iostream>
#include "fucns.h"
#include "agent.h"
#include "services.h"
#include <string>
#include <algorithm>

using namespace std;

char id;

void newGame()
{
    string file;
    cout << "Which file does the map exist in ? (Default => files/map.ini):";
    cin >> file;

    if (file == "\n")
    {
        datamanProt2("files/map.ini", world);
        datamanProt2("files/map.ini", ROW, COL);
    }
    else
    {
        datamanProt2("files/"+file, world);
        datamanProt2("files/"+file, ROW, COL);
    }

    display_world();

    char playeropt;

    while (true)
    {
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

        else if (input == "map")
        {
            display_world();
        }

        else if (input == "countrydet")
        {
            char cid;
            cout << "Enter ID:";
            cin >> cid;

            countryDetails(cid);
        }

        else if (input == "dores")
        {
            getCountry(id).doRes();
        }

        else if (input == "showres")
        {
            getCountry(id).showRes();
        }

        else if (input == "createser")
        {
            getCountry(id).createSer();
        }

        else if (input == "showser")
        {
            getCountry(id).showSer();
        }

        else if (input == "showall")
        {
            return;
        }

        // WE NEED TO ADD THREADS TO SREVICES
            // CREATED THREADS IN SERVICES.CPP
        // FIX IT
            // NEW PROBELM WE CANNOT UPDATE THE CLASS VARIABLES
                // FiXED (HOPEFULLY)

        else
        {
            cout << "Invald command :(" << endl;
        }

    }
}