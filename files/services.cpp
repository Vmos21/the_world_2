#include <iostream>
#include <iomanip>
#include <string>

#include "services.h"

#define WIDTH 40

services::services()
{
    return;    
}

void services::createSer()
{   
    cout << setw(WIDTH) << setfill('-') << "" << endl;
    cout << setw((WIDTH-8)/2) << setfill(' ') << "SERVICES" << endl;
    cout << setw(WIDTH) << setfill('-') << "" << endl;
}

void services::showSer()
{
    return;
}

research::research()
{
    return;
}

void research::doRes()
{
    return;
}

void research::showRes()
{
    return;
}