// Included Header Files

#include <iostream>
#include <iomanip>
#include <string.h>
#include "files/fucns.h"
//#include "files/country.h"

using namespace std;

// Functions

void title()
{
    cout << setw(308) << setfill('=') << "" << endl;
    cout << setw(308/2) << setfill(' ') << "\033[1;37mTHE WORLD\033[0m" << endl;
    cout << setw(308) << setfill('=') << "" << endl;
}

void displayMenu()
{
    int opt;
    cout << setw(308/2) << setfill(' ') << "SELECT ONE OF THE OPTIONS" << endl;
    cout << setw(308/2-strlen("SELECT ONE OF THE OPTIONS")+strlen("1. NEW GAME")/2) << setfill(' ') << "1. NEW GAME" << endl;
    cout << setw(308/2-strlen("SELECT ONE OF THE OPTIONS")+strlen("2. SAVED GAME")/2) << setfill(' ') << "2. SAVED GAME" << endl;
    cout << setw(308/2-strlen("SELECT ONE OF THE OPTIONS")+strlen("3. EXIT")/2) << setfill(' ') << "3. EXIT" << endl;
    cout << ">>";
    cin >> opt;

    switch (opt)
    {
    case 1: cout << "NEW GAME" << endl;
        break;

    case 2: cout << "OPENING GAME" << endl;
        break;

    case 3: break;

    default: cout << "NO NUMBER ASSINGED." << endl;
        break;
    }
}

int main()
{
    //title();
    //displayMenu();

    display_world();

    char id;
    cout << "Enter a country ID: ";
    cin >> &id;

    countryDetails(id);

    return 0;
}

