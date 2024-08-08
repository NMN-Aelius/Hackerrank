#include<iostream>
#include<cstdio>
#include<math.h>
#include<iomanip>

using namespace std;

// Function to round a float number to 'n' decimal places
float fNumber(float *ptr, int n)
{
    *ptr = round(*ptr * pow(10, n));
    return *ptr / pow(10, n);
}

// Function to round a double number to 'n' decimal places
double dNumber(double *ptr, int n)
{
    *ptr = round(*ptr * pow(10, n));
    return *ptr / pow(10, n);
}

int main()
{
    int i;
    long long l;
    char c;
    float f;
    double d;

    // Reading inputs
    cout << "Please input value: " << endl;
    cin >> i >> l >> c >> f >> d;

    // Round float and double numbers to the desired precision
    f = fNumber(&f, 3);  // Round float to 3 decimal places
    d = dNumber(&d, 9);  // Round double to 9 decimal places

    // Output the values
    cout << i << endl;
    cout << l << endl;
    cout << c << endl;
    cout << fixed << setprecision(3) << f << endl;
    cout << fixed << setprecision(9) << d << endl;

    return 0;
}
