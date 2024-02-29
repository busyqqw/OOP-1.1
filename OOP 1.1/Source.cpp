#include "Number.h"
#include <iostream>
using namespace std;

int main()
{
    Number num;
    num.Read();
    num.Display();

    double factor;
    cout << "Enter a factor to multiply the number by: ";
    cin >> factor;
    num.multiply(factor);

    cout << "Number after multiplication:" << endl;
    num.Display();

    return 0;
}
