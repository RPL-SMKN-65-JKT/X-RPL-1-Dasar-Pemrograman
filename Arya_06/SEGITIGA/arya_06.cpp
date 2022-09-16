#include <iostream>
using namespace std;

int main() {

int a;
int b;
int c;

system ("color a");
cout << "Ketik Sisi A: " << endl;
cin >> a;
cout << "Ketik Sisi B: " << endl;
cin >> b;
cout << "Ketik Sisi C: " << endl;
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
