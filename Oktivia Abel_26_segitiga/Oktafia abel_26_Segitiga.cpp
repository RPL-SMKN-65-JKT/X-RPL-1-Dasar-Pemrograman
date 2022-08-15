#include <iostream>
using namespace std;

int main() {

int a,b,c;
int x,y,z;
int g,f,h;

    cout << "========================"<< endl;
    cout << "Masukan Sisi A: ";
    cin >> a;
    cout << "Masukan Sisi B: ";
    cin >> b;
    cout << "Masukan Sisi c: ";
    cin >> c;
    cout << "Segitiga Sama sisi"<< endl;
    cout << "========================"<< endl;

    cout << "Masukan Sisi X: ";
    cin >> x;
    cout << "Masukan Sisi Y: ";
    cin >> y;
    cout << "Masukan Sisi Z: ";
    cin >> z;
    cout << "Segitiga Sama Kaki"<< endl;
    cout << "========================="<< endl;

    cout << "Masukan Sisi G: ";
    cin >> g;
    cout << "Masukan Sisi F: ";
    cin >> f;
    cout << "Masukan Sisi H: ";
    cin >> h;
    cout << "Segitiga Sembarang"<< endl;
    cout << "========================="<< endl;

    if (a==b && a==c)
        cout << "Segitiga Sama Sisi\n";

    if (x<=y && x<=z)
        cout << "Segitiga Sama Kaki\n";

    if (g>=f && g>=h)
        cout << "Segitiga Sembarang\n";

return 0;
}