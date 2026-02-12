#ifndef AGENT_H
#define AGENT_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int dataMan(string fname);
void datamanProt1(string fname);
void datamanProt2(string fname, vector<string> &map);
void datamanProt2(string fname, int &row, int &col);
void datamanProt2(string fname, country &counArr);
#endif