#include <iostream>
using namespace std;

int main() {

int a,b,c;
int p,q,r;
int x,y,z;

    cout << "============================"
<< endl;
    cout << "Input sisi A: ";
    cin >> a;
    cout << "Input sisi B: ";
    cin >> b;
    cout << "Input sisi C: ";
    cin >> c;
    cout << "Segitiga sama sisi"<< endl;
    cout << "============================" << endl;

    cout << "Input sisi P: ";
    cin >> p;
    cout << "Input sisi Q: ";
    cin >> q;
    cout << "Input sisi R: ";
    cin >> r;
    cout << "Segitiga sama kaki"<< endl;
    cout << "============================" << endl;

    cout << "Input sisi X: ";
    cin >> x;
    cout << "Input sisi Y: ";
    cin >> y;
    cout << "input sisi Z: ";
    cin >> z;
    cout << "Segitiga sembarang"<< endl;
    cout << "===========================" << endl;

    if (a==b && a==c)
        cout << "Segitiga sama sisi\n";

    if (p<=q && p<=r)
        cout << "Segitiga sam kaki\n";

    if (x>=y && x>=z)
        cout << "Segitiga sembarang\n";

    return 0;
}
