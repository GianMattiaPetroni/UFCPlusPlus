#include <iostream>
#include <string>
using namespace std;

bool ciSonoDoppie(string parola)
{
    bool risultato;

    for (int i = 0; i < parola.length(); i++)
    {

        if (parola[i] == parola[i + 1])
        {
            risultato = true;
        }
        else
        {
            risultato = false;
        }
    }
    return risultato;
}
int main()
{
   
}
