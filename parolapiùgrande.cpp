#include <iostream>
#include <string>
using namespace std;

int main() {
    int max = 0;
    for(int i=0;i<10;i++) {
        string parola;
        cout<<"inserisci 10 parole"<<endl;
        cin>> parola;

        int lunghezza = parola.lenght();
        if(lunghezza>max){
            max = lunghezza;
        }

    }
    cout << max << endl;
}