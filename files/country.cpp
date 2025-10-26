#include <iostream>
#include <iomanip>
#include <string>
#include "fucns.h"
using namespace std;

#define WIDTH 40

void country::setCid(char id)
{
    this->cid = id;
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
    cout << "|MILITARY STRENGTH: " << this->strength << setw(WIDTH-(21+to_string(this->strength).length()/2)) << setfill(' ') << '|' << endl;
    cout << "|NO. OF RESOURCES: " << this->resources << setw(WIDTH-(19+to_string(this->resources).length())) << '|' << endl;
    cout << "|ECONOMY: " << this->eco << setw(WIDTH-(10+to_string(this->eco).length())) << '|' << endl;
}

char country::getId()
{
    return this->cid;
}

country::country (string name, char cid)
{
    this->name = name;
    setCid(cid);
    //changeAttr(strength, res, eco);
    cout << "Country Created!" << endl;
};

void displayCountry(country count)
{
    cout << setw(WIDTH) << setfill('-') << "" << endl;
    cout << "|NAME: " << count.name << setw(WIDTH-(7+count.name.length())) << setfill(' ') <<'|' << endl;
    cout << setw(WIDTH) << setfill('-') << "" << endl;
    count.getDetails();
    cout << setw(WIDTH) << setfill('-') << "" << endl;
}
