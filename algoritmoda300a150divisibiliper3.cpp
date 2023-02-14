#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
    int i = 300;
    while (i >= 150)
    {

        if (i % 3 == 0)
        {
            cout << i << "\n";
        }
        else
        {
            cout << "----";
            cout << "\n";
        }
        i--;
    }
}