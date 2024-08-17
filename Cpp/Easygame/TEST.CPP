#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main()
{
    string str;
    getline(cin,str);
    
    stringstream ss(str);
    string sword;
    int dem = 0;
    while (ss >> sword)
    {
        ++dem;
        cout << "STT " << dem << " Word: " << sword << endl;
    } // slip word until it doesnt have any ones.
    return 0;
}