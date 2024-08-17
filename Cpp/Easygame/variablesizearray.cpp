#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n, q;

int main()
{
    cout << "input n and q: ";
    cin >> n >> q;

    int k;
    vector<vector<int>> a(n);
    cout << "input with this format: k a0 a1 a2 ... depend on k" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> k;
        a[i].resize(k);

        for (int h = 0; h < k; h++)
        {
            cin >> a[i][h];
        }
    }

    vector<int> i1(q), j1(q);
    for(int i=0; i<q; i++)
        cin >> i1[i] >> j1[i];

    for(int i=0; i<q; i++)
    {
        cout << a[i1[i]][j1[i]] << endl;
    }
    return 0;
}