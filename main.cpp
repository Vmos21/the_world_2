// Included Header Files

#include <iostream>
#include <iomanip>
#include <string.h>
#include <strings.h>
#include "files/fucns.h"
#include "files/agent.cpp"
//#include "files/country.h"

using namespace std;

// Functions

void title();
void displayMenu();

int main()
{
    title();
    displayMenu();

    //display_world();

    //char id;
    //cout << "Enter a country ID: ";
    //cin >> &id;

    //countryDetails(id);

    return 0;
}

// Functions AGAIN !!

void title()
{
    cout << setw(308) << setfill('=') << "" << endl;
    cout << setw(308/2) << setfill(' ') << "\033[1;37mTHE WORLD\033[0m" << endl;
    cout << setw(308) << setfill('=') << "" << endl;
}

void displayMenu()
{
    int opt;
    cout << "ENTER THE NO. NEXT TO ONE OF THE OPTIONS" << endl;
    cout << "1. NEW GAME" << endl;
    cout << "2. OPEN SAVED GAME" << endl;
    cout << "3. EXIT" << endl;

    while (true)
    {
        cout << ">>";
        cin >> opt;

        switch (opt)
        {
        case 1: cout << "NEW GAME"<< endl;
            clearConsole();
            newGame();
            return;

        case 2: cout << "OPENING GAME" << endl;
            return;

        case 3: return;

        default: cout << "NO NUMBER ASSINGED." << endl;
            break;
        }
    }
}
