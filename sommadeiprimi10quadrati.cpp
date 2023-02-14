#include <iostream>
#include <math.h>
using namespace std;
int totale(int a)
{

    int i = 0;
    int somma = 0;
    while (i <= a)
    {
        somma += i * i;
        i++;
    }
    return somma;
}
int main()
{
    int somma = totale(10);

    cout << "la somma dei primi 10 numeri quadrati e': " << somma << endl;
    return 0;
}