// calcola il valore più grande
// input: x,y
// output: ritorna il valore più grande

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int piùGrande(int x, int y)
{
    for (int i = 1; i <= 10; i++)
    {
        if (x > y)
        {
            y = x;
        }
    }

    return y;
}

// calcola se è pari
// input: x;
// output: pari o dispari
bool isEven(int x)
{
    int resto;
    resto = x % 2;
    if (resto == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// calcola costo totale
// input: prezzo, interesse
// output: ritorna il costo totale
double costoTotale(double prezzo, int interesse)
{

    double prezzo;
    int interesse;
    double interesse = prezzo * 0, 5;

    double costototale;
    double costototale = prezzo + interesse;
    return costototale;
}

// ti dice se puoi entrare nel bar o no
// input: età
// output; "puoi entrare" o "non puoi entrare"

void buttaFuori(int eta)
{
    if (eta < 18)
    {
        cout << "non puoi entrare"
             << "\n";
    }
    else
    {
        cout << "puoi entrare"
             << "\n";
    }
}

// ti stampa i valori in ordine decrescente
// input: int a,b,i
// output: valori in ordine decrescente

void descrescente(int a, int b)
{
    for (int i = a; i > b; i--)
    {
        cout << i << "\n";
    }
}