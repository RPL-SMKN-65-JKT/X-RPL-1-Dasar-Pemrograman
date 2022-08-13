#include <iostream>
using namespace std;

int main() {

int d,e,f;
int a,b,c;
int h,i,j;

    cout << "========================"<< endl;
    cout << "Masukan Sisi D: ";
    cin >> d;
    cout << "Masukan Sisi E: ";
    cin >> e;
    cout << "Masukan Sisi F: ";
    cin >> f;
    cout << "Segitiga Sama sisi"<< endl;
    cout << "========================"<< endl;

    cout << "Masukan Sisi A: ";
    cin >> a;
    cout << "Masukan Sisi B: ";
    cin >> b;
    cout << "Masukan Sisi C: ";
    cin >> c;
    cout << "Segitiga Sama Kaki"<< endl;
    cout << "========================="<< endl;

    cout << "Masukan Sisi H: ";
    cin >> h;
    cout << "Masukan Sisi I: ";
    cin >> i;
    cout << "Masukan Sisi J: ";
    cin >> j;
    cout << "Segitiga Sembarang"<< endl;
    cout << "========================="<< endl;

    if (d==e && d==f)
        cout << "Segitiga Sama Sisi\n";

    if (a<=b && a<=c)
        cout << "Segitiga Sama Kaki\n";

    if (h>=i && h>=j)
        cout << "Segitiga Sembarang\n";

return 0;
}
