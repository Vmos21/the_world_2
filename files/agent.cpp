#include <iostream>
#include <vector>
using namespace std;

void getData(string fname, int &row, int &col);
void getData(string fname, vector<string> &map);

/*
int main()
{
    cout << "----------" << endl;
    cout << "The Agent" << endl;
    cout << "----------" << endl;
    return 0;
}
*/

// The agent is supposed to act as a buffer between Manip and whatever the file be.
// Based on the file and the return types we gotta connect the ends.

// IDEA-I
// What if we create a function and we provide the file name, and the datatype of what output we need;
// And I think we can somehow make like functions with same name but different arguments;
// But things change when we need to get the output like say the map thing. We need the ROW, COL (int), and we also need the MAP (vector) itself.

// We need to repeat whatever we make again for all the other files;

// IDEA-II
// What if instead of an agent, we just get the data directly from the prototype => Prototype-2

void getData(string fname, int &row, int &col)
{
    return;
}

void getData(string fname, vector<string> &map)
{
    return;
}