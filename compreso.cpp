#include <iostream>

using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cout << "inserisci tre numeri";
    cin >> a;
    cin >> b;
    cin >> c;
    if (a >= b and b >= c)
    {
        cout << " b è compreso tra a e c ";
    }
    else if (b >= a and b <= c)
    {
        cout << " b è compreso tra a e c";
    }
    else
    {
        cout << " b non è compreso tra a e c";
    }
    return 0;
}