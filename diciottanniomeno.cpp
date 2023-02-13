#include <iostream>
#include <string>

using namespace std;
int main();

{
    int valore = 0;
    cout << " quanti anni hai?";
    cin >> valore;

    bool risultato = valore >= 18;
    if (risultato)
    {
        cout << " Cheers! Buon divertimento al bar!";
    }
    else if (valore < 18)
    {
        cout << "Mi dispiace, sei troppo giovane per bere birra";
    }
}
