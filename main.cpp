#include <iostream>
#include <iomanip>
#include <string.h>
#include "files/fucns.h"
//#include "files/country.h"

using namespace std;

void title()
{
    cout << setw(308) << setfill('=') << "" << endl;
    cout << setw(308/2) << setfill(' ') << "\033[1;37mTHE WORLD\033[0m" << endl;
    cout << setw(308) << setfill('=') << "" << endl;
}

int main()
{
    //title();

    //cout << setw(308/2) << setfill(' ') << "SELECT ONE OF THE OPTIONS" << endl;
    //cout << setw(308/2-strlen("SELECT ONE OF THE OPTIONS")+strlen("NEW GAME")/2) << setfill(' ') << "NEW GAME" << endl;
    //cout << setw(308/2-strlen("SELECT ONE OF THE OPTIONS")+strlen("SAVED GAME")/2) << setfill(' ') << "SAVED GAME" << endl;
    //cout << setw(308/2-strlen("SELECT ONE OF THE OPTIONS")+strlen("EXIT")/2) << setfill(' ') << "EXIT" << endl;

    display_world();

    char id;
    cout << "Enter a country ID: ";
    cin >> &id;

    countryDetails(id);

    return 0;
}

