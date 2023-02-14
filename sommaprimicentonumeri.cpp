#include <iostream>
using namespace std;
int main()
{
    int somma = 0;
    for (int i = 1; i <= 100; i++;)
    {
        somma += 1;
     }
    cout << "La somma dei primi 100 numeri interi è: " << somma << "\n";
    return 0;
}