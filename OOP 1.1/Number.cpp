#include "Number.h"
#include <iostream>
using namespace std;

bool Number::Init(int x, double y)
{
    if (x >= 0 && y >= 0)
    {
        first = x;
        second = y;
        return true;
    }
    else
    {
        cout << "Invalid arguments to Init!" << endl;
        return false;
    }
}

void Number::Read()
{
    int x;
    double y;
    cout << "Input number:" << endl;
    cout << " First = ";
    cin >> x;
    cout << " Second = ";
    cin >> y;
    while (!Init(x, y))
    {
        cout << "Invalid input. Second must be a non-negative number. Try again." << endl;
        cout << " Second = ";
        cin >> y;
    }
}

void Number::Display() const
{
    cout << " First = " << first << endl;
    cout << " Second = " << second << endl;
}

void Number::multiply(double factor)
{
    first *= factor;
    second *= factor;
}
int Number::Getfirst(int x)
{
    x = first;
    return x;
}
double Number::Getsecond(double y)
{
    y = second;
    return y;
}