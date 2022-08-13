#include <iostream>
using namespace std;

int main() {

int a,b,c;
int j,k,l;
int q,r,s;

    cout << "========================"<< endl;
    cout << "Masukan Sisi A: ";
    cin >> a;
    cout << "Masukan Sisi B: ";
    cin >> b;
    cout << "Masukan Sisi c: ";
    cin >> c;
    cout << "Segitiga Sama sisi"<< endl;
    cout << "========================"<< endl;

    cout << "Masukan Sisi J: ";
    cin >> j;
    cout << "Masukan Sisi K: ";
    cin >> k;
    cout << "Masukan Sisi L: ";
    cin >> l;
    cout << "Segitiga Sama Kaki"<< endl;
    cout << "========================="<< endl;

    cout << "Masukan Sisi Q: ";
    cin >> q;
    cout << "Masukan Sisi R: ";
    cin >> r;
    cout << "Masukan Sisi S: ";
    cin >> s;
    cout << "Segitiga Sembarang"<< endl;
    cout << "========================="<< endl;

    if (a==b && a==c)
        cout << "Segitiga Sama Sisi\n";

    if (j<=k && j<=l)
        cout << "Segitiga Sama Kaki\n";

    if (q>=r && q>=s)
        cout << "Segitiga Sembarang\n";

return 0;
}
