  #include <iostream>
using namespace std;

int main() {

int d,e,f;
int k,l,m;
int o,p,q;

    cout << "________________________"<< endl;
    cout << "Masukan Sisi D: ";
    cin >> d;
    cout << "Masukan Sisi E: ";
    cin >> e;
    cout << "Masukan Sisi F: ";
    cin >> f;
    cout << "Segitiga Sama sisi"<< endl;
    cout << "________________________"<< endl;

    cout << "Masukan Sisi K: ";
    cin >> k;
    cout << "Masukan Sisi L: ";
    cin >> l;
    cout << "Masukan Sisi M: ";
    cin >> m;
    cout << "Segitiga Sama Kaki"<< endl;
    cout << "________________________"<< endl;

    cout << "Masukan Sisi O: ";
    cin >> o;
    cout << "Masukan Sisi P: ";
    cin >> p;
    cout << "Masukan Sisi Q: ";
    cin >> q;
    cout << "Segitiga Sembarang"<< endl;
    cout << "________________________"<< endl;

    if (d==e && d==f)
        cout << "Segitiga Sama Sisi\n";

    if (k<=l && k<=m)
        cout << "Segitiga Sama Kaki\n";

    if (o>=p && o>=q)
        cout << "Segitiga Sembarang\n";

return 0;
}