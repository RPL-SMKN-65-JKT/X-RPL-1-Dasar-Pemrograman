#include <iostream>
using namespace std;

int main() {

int a,b,c;

cout << "Type Sisi A: ";
cin >> a;
cout << "Type Sisi B: ";
cin >> b;
cout << "Type Sisi C: ";
cin >> c;

    if(a == b && a == c)
        cout << "Segitiga Sama Sisi\n";

    if (a < b && a < c)
        cout << "Segitiga Sama Kaki\n";
    else if ( a > b && a == c)
        cout << "Segitiga Sama Kaki\n";
    else if (a == b && a > c)
        cout << "Segitiga Sama Kaki\n";
    else if (a < b && a == c)
        cout << "Segitiga Sama Kaki\n";
    else if (a == b && a < c)
        cout << "Segitiga Sama Kaki\n";
    else if (a < b && a > c)
        cout << "Segitiga Sama Kaki\n";
    else if (a < c && a > b)
        cout << "Segitiga Sama Kaki\n";


    if (a > b && a > c)
        cout << "Segitiga Sembarang\n";
    else if (a < b && a == c)
        cout << "Segitiga Sembarang\n";
    else if (a == b && a < c)
        cout << "Segitiga Sembarang\n";
    else if ( a > b && a == c)
        cout << "Segitiga Sembarang\n";
    else if (a == b && a > c)
        cout << "Segitiga Sembarang\n";
    else if (a < b && a > c)
        cout << "Segitiga Sembarang\n";
    else if (a < c && a > b)
        cout << "Segitiga Sembarang\n";

return 0;
}
