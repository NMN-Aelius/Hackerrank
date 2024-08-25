#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main()
{
    string food = "pizza";
    string &meal = food;

    meal = "chicken";

    cout<< food;
    return 0;
}