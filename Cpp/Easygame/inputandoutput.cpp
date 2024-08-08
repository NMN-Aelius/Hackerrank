/* Read 3 numbers from stdin and print their sum to stdout. */

#include<iostream>
//lib for in/output operation
#include<cstdio>

//declare
using namespace std;

//variables
int v[3] = {0};

int main()
{
    cout << "Please input value: " << endl;
    cin >> v[2] >> v[1] >> v[0];

    cout << v[2]+ v[1] + v[0] <<endl;
    return 0;
}