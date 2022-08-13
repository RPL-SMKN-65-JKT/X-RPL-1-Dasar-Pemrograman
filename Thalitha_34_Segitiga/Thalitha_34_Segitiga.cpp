#include <iostream>
using namespace std;

int main() {

    int a,b,c;
    int k,l,m;
    int x,y,z;

    cout << "========================" << endl;
    cout << "Masukan Sisi A: ";
    cin >> a;
    cout << "Masukan Sisi B: ";
    cin >> b;
    cout << "Masukan Sisi C: ";
    cin >> c;
    cout << "Segitiga Sama Sisi"<< endl;
    cout << "========================"<< endl;

    cout << "Masukan Sisi K: ";
    cin >> k;
    cout << "Masukan Sisi L: ";
    cin >> l;
    cout << "Masukan Sisi M: ";
    cin >> m;
    cout << "Segitiga Sama Kaki"<< endl;
    cout << "======================="<< endl;

    cout << "Masukan Sisi X: ";
    cin >> x;
    cout << "Masukan Sisi Y: ";
    cin >> y;
    cout << "Masukan Sisi Z: ";
    cin >> z;
    cout << "Segitiga Sembarang"<< endl;
    cout << "======================="<< endl;

    if (a==b && a==c)
        cout << "Segitiga Sama Sisi\n";

    if (k<=l && k<=m)
        cout << "Segitiga Sama Kaki\n";

    if (x>=y && x>=z)
        cout << "Segitiga Sembarang\n";

return 0;
}
