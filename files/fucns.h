#ifndef FUCN_H
#define FUCN_H

// Header files
#include <string>
#include "services.h"

using namespace std;

// Functions from map.cpp
void display_world();
void countryDetails(char id);

// Classes and Functions from country.cpp
class country: public services
{
    private:
        char cid;
        float strength = 0;
        int resources = 0;
        float rating;
        int eco = 10000;
        float timeReq = 12000;
        float ecoRt = 0;
        float popRt = 0;
        float taxes = 0;
        int role = 0; // 0-> Neutral 1-> You 2-> Enemy

    public:
        string name;
        int pop = 1000;

        void setCid(char id);
        void setPlayer();
        //void changeAttr(float stgth, int res, int eco);
        void getDetails();
        char getId();

    
    country (string name, char cid);
};

void displayCountry(country count);

#endif