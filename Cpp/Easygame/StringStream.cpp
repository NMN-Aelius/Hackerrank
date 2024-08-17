#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    vector<int> back;
    stringstream ss(str);
    string sword;

    while (getline(ss, sword, ','))
    {
        if(!(sword.empty()))
        {
            back.push_back(stoi(sword));
        }
    } // slip word until it doesnt have any ones.

    return back;
}

int main()
{
    string str;
    getline(cin, str);
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}