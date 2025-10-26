#ifndef FUCN_H
#define FUCN_H

#include <string>
using namespace std;

// Functions from map.cpp
void display_world();
void countryDetails(char id);

// Classes and Functions from country.cpp
class country
{
    private:
        char cid;
        float strength = 0;
        int resources = 0;
        int eco = 0;

    public:
        string name;

        void setCid(char id);
        void changeAttr(float stgth, int res, int eco);
        void getDetails();
        char getId();

    
    country (string name, char cid, float strength, int res, int eco);
};

void displayCountry(country count);

#endif