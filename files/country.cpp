// Header Files

#include <iostream>
#include <iomanip>
#include <string>

#include "fucns.h"
#include "services.h"


using namespace std;

#define WIDTH 40

// Oject Functions

void country::setCid(char id)
{
    this->cid = id;
}

void country::setPlayer()
{
    this->role = 1;
}
/*
void country::changeAttr(int res, int eco)
{
    this->eco = this->eco + eco;
    this->resources = this->resources + res;
}
*/

void country::getDetails()
{
    cout << "|ID: " << this->cid << setw(WIDTH-6) << setfill(' ') << '|' << endl;
    cout << "|MILITARY STRENGTH: " << this->strength << setw(WIDTH-20-(to_string(this->strength).length())/8) << setfill(' ') << '|' << endl;
    cout << "|NO. OF RESOURCES: " << this->resources << setw(WIDTH-(19+to_string(this->resources).length())) << '|' << endl;
    cout << "|ECONOMY: " << this->eco << setw(WIDTH-(10+to_string(this->eco).length())) << '|' << endl;
}

char country::getId()
{
    return this->cid;
}

// Constructor

country::country (string name, char id)
{
    this->name = name;
    setCid(id);
    //changeAttr(strength, res, eco);
};

// Other Functions

void displayCountry(country count)
{
    cout << setw(WIDTH) << setfill('-') << "" << endl;
    cout << "|NAME: " << count.name << setw(WIDTH-(7+count.name.length())) << setfill(' ') <<'|' << endl;
    cout << setw(WIDTH) << setfill('-') << "" << endl;
    count.getDetails();
    cout << setw(WIDTH) << setfill('-') << "" << endl;
}
