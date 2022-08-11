#include <iostream>
using namespace std;

int main() {

int a,b,c;
int d,e,f;
int g,h,i;

    cout << "*************************"<< endl;
    cout << "Panjang Sisi A: ";
    cin >> a;
    cout << "Panjang Sisi B: ";
    cin >> b;
    cout << "Panjang Sisi C: ";
    cin >> c;
    cout << "Segitiga Sama sisi"<< endl;
    cout << "*************************"<< endl;

    cout << "Panjang Sisi D: ";
    cin >> d;
    cout << "Panjang Sisi E: ";
    cin >> e;
    cout << "Panjang Sisi F: ";
    cin >> f;
    cout << "Segitiga Sama Kaki"<< endl;
    cout << "*************************"<< endl;

    cout << "Panjang Sisi G: ";
    cin >> g;
    cout << "Panjang Sisi H: ";
    cin >> h;
    cout << "Panjang Sisi I: ";
    cin >> i;
    cout << "Segitiga Sembarang"<< endl;
    cout <<"*************************"<< endl;

    if (a==b && a==c)
        cout << "Segitiga Sama Sisi\n";

    if (d==e && d==f)
        cout << "Segitiga Sama Kaki\n";

    if (g==h && g==i)
        cout << "Segitiga Sembarang\n";

return 0;
}
