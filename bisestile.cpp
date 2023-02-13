#include <iostream>

using namespace std;
int main() {
    int anno;
    cout<< "inserire un anno per vedere se è bisestile ";
    cin>> anno;
    if 
        (anno % 4 == 0 or anno % 400 == 0 ) {
    cout<< "questo anno è bisestile"; }
    else if (anno % 100 != 0) {
    cout<< " questo anno non è bisestile";
    }
else
{
   cout<< " questo anno non è bisestile";
}
return 0;
}