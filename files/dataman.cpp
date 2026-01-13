#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int dataWrite(string fname);
auto dataMan(string fname);

/*
int main()
{
    string fname;
    cout << "Enter file name: ";
    cin >> fname;

    dataWrite(fname);

    return 0;

}
*/

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
auto dataMan(string fname)
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
        if (line == "[]")
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
                return;
            }
        }
    }

    return;
}

// Based on that try to manage the data into a .ini 
//file so that the content can be manimulatable and people can make mods for more fun
// Also make it such that we have no magic values and everything comes from the files
// EG: Like we have countries and a map make like the map and other details come 
// from the .ini files only and not from the raw code itself