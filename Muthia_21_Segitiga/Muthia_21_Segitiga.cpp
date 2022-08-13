#include <iostream>
using namespace std;

int main() {

int a,b,c;
int x,y,z;
int j,k,l;

    cout << "________________________"<< endl;
    cout << "Masukan Sisi A: ";
    cin >> a;
    cout << "Masukan Sisi B: ";
    cin >> b;
    cout << "Masukan Sisi c: ";
    cin >> c;
    cout << "Segitiga Sama sisi"<< endl;
    cout << "________________________"<< endl;

    cout << "Masukan Sisi X: ";
    cin >> x;
    cout << "Masukan Sisi Y: ";
    cin >> y;
    cout << "Masukan Sisi Z: ";
    cin >> z;
    cout << "Segitiga Sama Kaki"<< endl;
    cout << "________________________"<< endl;

    cout << "Masukan Sisi J: ";
    cin >> j;
    cout << "Masukan Sisi K: ";
    cin >> k;
    cout << "Masukan Sisi L: ";
    cin >> l;
    cout << "Segitiga Sembarang"<< endl;
    cout << "________________________"<< endl;

    if (a==b && a==c)
        cout << "Segitiga Sama Sisi\n";

    if (x<=y && x<=z)
        cout << "Segitiga Sama Kaki\n";

    if (j>=k && j>=l)
        cout << "Segitiga Sembarang\n";

return 0;
}
