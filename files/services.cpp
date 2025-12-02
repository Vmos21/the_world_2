// Header Files

#include <iostream>
#include <iomanip>
#include <string>
#include <thread>
#include <chrono>
#include <algorithm>

#include "services.h"

// Defined Values

#define WIDTH 40

// Constructors

services::services()
{
    return;    
}

research::research()
{
    return;
}

// Class Functions

void services::createSer()
{   
    cout << setw(WIDTH) << setfill('-') << "" << endl;
    cout << setw((WIDTH+8)/2) << setfill(' ') << "SERVICES" << endl;
    cout << setw(WIDTH) << setfill('-') << "" << endl;

    int opt;

    cout << "what would you like to build ? (Takes " << (1/(1+this->constRes))*120 << " secs)" << endl;
    cout << "1. Education Center" << "\n2. Hospital" << "\n3. Public Services" << "\n4. Jobs" << "\n5. Exit" << endl;
    cout << "\033[1;32m>>>\033[0m";
    cin >> opt;
    
    if (opt == 5)
    {
        return;
    }
    std::thread([this, opt]
        {
            this_thread::sleep_for(chrono::seconds((1/(1+this->constRes))*120));
            ser2(opt);
        }).detach();
}

void services::ser2(int opt)
{
    switch (opt)
    {
        case 1: this->eduCenter++; cout << "Education Center Has been built." << endl;
            break;

        case 2: this->hos++; cout << "Hospital has been built." << endl;
            break;
            
        case 3: this->publService++; cout << "Public Services has been built." << endl;
            break;

        case 4: this->jobOpps++; cout << "More Jobs are created." << endl;
            break;

        default: cout << "No Command assigned." << endl;
            break;
    }
}

void services::showSer()
{
    cout << setw(WIDTH) << setfill('-') << "" << endl;
    cout << setw((WIDTH+8)/2) << setfill(' ') << "SERVICES" << endl;
    cout << setw(WIDTH) << setfill('-') << "" << endl;
    cout << "|Edu Centers: " << this->eduCenter << setw((WIDTH-14-(to_string(this->eduCenter).length()))) << setfill(' ') << '|' << endl;
    cout << "|Hospitals: " << this->hos << setw(WIDTH-12-to_string(this->hos).length()) << setfill(' ') << '|' << endl;
    cout << "|Public Services: " << this->publService << setw(WIDTH-18-to_string(this->publService).length()) << setfill(' ') << '|' << endl;
    cout << "|Jobs: " << this->jobOpps << setw(WIDTH-7-to_string(this->jobOpps).length()) << setfill(' ') << '|' << endl;
    cout << setw(WIDTH) << setfill('-') << "" << endl;
    return;
}

void research::doRes()
{
    cout << setw(WIDTH) << setfill('-') << "" << endl;
    cout << setw((WIDTH+8)/2) << setfill(' ') << "RESEARCH" << endl;
    cout << setw(WIDTH) << setfill('-') << "" << endl;

    int opt;

    cout << "what research would you like to conduct ?" << endl;
    cout << "1. Infrastructure" << "\n2. Military" << "\n3. Economy" << "\n4. Diplomatics" << "\n5. Exit" << endl;
    cout << "\033[1;32m>>>\033[0m";
    cin >> opt;

    if (opt == 5)
    {
        return;
    }

    switch (opt)
    {
        case 1: this_thread::sleep_for(chrono::seconds((1/(1+this->constRes))*120)); this->constRes++; cout << "Construction Research Complete." << endl;
            return;

        case 2: this_thread::sleep_for(chrono::seconds((1/(1+this->milRes))*120)); this->milRes++; cout << "Military Research Complete." << endl;
            return;

        case 3: this_thread::sleep_for(chrono::seconds((1/(1+this->ecoRes))*120)); this->ecoRes++; cout << "Economy Research Complete." << endl;
            return;

        case 4: this_thread::sleep_for(chrono::seconds((1/(1+this->dipRes))*120)); this->dipRes++; cout << "Diplomatics Research Complete." << endl;
            return;

        default: cout << "No Command assigned." << endl;
            return;
    }
}

void research::showRes()
{
    cout << setw(WIDTH) << setfill('-') << "" << endl;
    cout << setw((WIDTH+8)/2) << setfill(' ') << "RESEARCH" << endl;
    cout << setw(WIDTH) << setfill('-') << "" << endl;
    cout << "|Infrastructure: " << this->constRes << setw((WIDTH-17-(to_string(this->constRes).length()))) << setfill(' ') << '|' << endl;
    cout << "|Military: " << this->milRes << setw(WIDTH-11-to_string(this->milRes).length()) << setfill(' ') << '|' << endl;
    cout << "|Economy: " << this->ecoRes << setw(WIDTH-10-to_string(this->ecoRes).length()) << setfill(' ') << '|' << endl;
    cout << "|Diplomatics: " << this->dipRes << setw(WIDTH-14-to_string(this->dipRes).length()) << setfill(' ') << '|' << endl;
    cout << setw(WIDTH) << setfill('-') << "" << endl;

    return;
}