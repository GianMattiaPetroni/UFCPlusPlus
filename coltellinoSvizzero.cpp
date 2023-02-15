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
        int grande;
        if (x > y)
        {
            grande = x;
        }
        else
        {
            grande = y;
        }
    }

    return grande;
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
    double interesse = prezzo * interesse / 100;

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
// input: a,b,c
// output: valori in ordine decrescente

void descrescente(int a, int b, int c)
{
    int min = a, med = a, max = a;
    if (b < min)
    {
        min = b;
    }
    else if (b > max)
    {
        max = b;
    }
    else
    {
        med = b;
    }

    if (c < min)
    {
        min = c;
    }
    else if (c > max)
    {
        max = c;
    }
    else
    {
        med = c;
    }
    cout << min << med << max;
}

// ti stampa il nome all'interno di un rettangolo
// input: string nome
// output: il tuo nome

void stampaNome(string nome)
{
    string riga = "";
    int lunghezza = nome.lenght() : riga += "+-------";
    for (int i = 0; i <= lunghezza; i++)
    {
        riga += "-";
    }
    riga += "+ \n";
    cout << riga;
    cout << "|    " << nome << "    | \n";
    cout << riga;
}

// calcola se il valore dato è compreso tra gli altri due valori dati
// input: a, b, c
// output: "si, è compreso" o "no, non è compreso"

bool isBetween(int a, int b, int c)
{
    if (a <= b and b <= c)
    {
        cout << "si, è compreso"
             << "\n";
    }
    else
    {
        cout << "no, non è compreso"
             << "\n";
    }
    return 0;
}

// risolve l'equazione di secondo grado
// input: int a, int b, int c
// output: le soluzioni di x1 e in caso ci fosse di x2

void equazione(int a, int b, int c)
{
    double delta = b * b - 4 * a * c;
    if (delta < 0)
    {
        cout << "l'equazione non ha soluzioni. " << endl;
    }
    else if (delta == 0)
    {
        double x = -b / (2 * a);
        cout << " l'euqaizione ha come soluzione x1 = " << x << "\n";
    }
    else
    {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (+b + sqrt(delta)) / (2 * a);
        cout << "l'equazione ha come soluzioni x1 = " << x1 << "e x2 =" << x2 << endl;
    }
}

// inserisci un anno per verificare se sia bisestile o meno
// input: anno
// output: true (bisestile) o false (non bisestile)

bool bisestile(int anno)
{
    if (anno % 4 == 0 and anno % 100 != 0 or anno % 400 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// stampa la tabellina fino a moltiplicare il suo valore massimo 10 volte
// input: n
// output: tabellina

void stampaTabelline(int n)
{
    int tabellina = 0;
    for (int i = 0; i <= 10; i++)
    {
        tabellina = i * n;
        cout << tabellina << "\n";
    }
}

// stampa la tabellina fino a moltiplicare il suo valore m volte
// input: n, m
// output: tabellina

void stampaTabelline(int n, int m)
{
    int tabellina = 0;
    for (int i = 0; i <= m; i++)
    {
        tabellina = i * n;
        cout << tabellina << "\n";
    }
}

// ti dice se il valore è pari
// input: quanti
// output:è pari o non è pari

void stampaPari(int quanti)
{

    for (int i = 0; i <= quanti; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << "è pari"
                 << "\n";
        }
        else
        {
            cout << i << "non è pari"
                 << "\n";
        }
    }
}
int main () {}