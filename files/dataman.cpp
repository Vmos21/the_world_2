#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "fucns.h"

using namespace std;

int dataMan(string fname);
void datamanProt1(string fname);

int main()
{
    string file = "map.ini";
    datamanProt1(file);
    return 0;
}

// Learn the writing object

int dataWrite(string fname)
{
    ofstream file(fname);

    if (!file)
    {
        cout << "File not found :(" << endl;
        return 1;
    }

    file << "[Info]" << endl;
    file << "101=Eric:A" << endl;
    file << "ID=101" << endl;
    file << "Grade=A" << endl;


    cout << "Complete" << endl;

    return 0;
}

// Learn the reading object

int dataMan(string fname)
{
    ifstream file(fname);
    string line;
    
    
    int secFlag = 0;
    int idThere = 0;

    if (!file)
    {
        cout << "File not found :(" << endl;
        return 1;
    }

    while (getline(file, line))
    {
        if (line == "[Info]")
        {
            secFlag = 1;
        }
        else if (secFlag == 1 && line[0] == '[')
        {
            return 0;
        }
        else if (secFlag == 1)
        {
            size_t pos = line.find('=');
            if (pos != string::npos)
            {
                cout << line.substr(pos+1) << endl;
            }
        }
    }

    return -1;
}

void datamanProt1(string fname) // Prototype 1
{
    ifstream file(fname);
    string line;

    if (!file)
    {
        cout << "File Not Found :(" << endl;
        return;
    }

    if (fname == "map.ini")
    {
        int row = 0;
        int col = 0;
        vector<string> map = {};

        while (getline(file, line))
        {
            size_t eqpos = line.find('=');
            if (eqpos != string::npos)
            {
                if (line.substr(0, eqpos) == "row")
                {
                    row = stoi(line.substr(eqpos+1));
                }
                else if (line.substr(0, eqpos) == "col")
                {
                    col = stoi(line.substr(eqpos+1));
                }
                else if (line.substr(0, eqpos) == "map")
                {
                    while (line != "")
                    {
                        size_t spos = line.find('{');
                        size_t epos = line.find('}');

                        map.push_back(line.substr(spos+1, epos-1));
                        line = line.substr(epos+1);
                        //cout << line << endl;
                    }
                }
            }
        }
        cout << row << "x" << col << endl;
        for (int i = 0; i < map.size(); i++)
        {
            cout << (map)[i] << endl;
        }
    }
    else if (fname == "info.ini")
    {

    }
    return;
}

// Based on that try to manage the data into a .ini 
//file so that the content can be manimulatable and people can make mods for more fun
// Also make it such that we have no magic values and everything comes from the files
// EG: Like we have countries and a map make like the map and other details come 
// from the .ini files only and not from the raw code itselfo