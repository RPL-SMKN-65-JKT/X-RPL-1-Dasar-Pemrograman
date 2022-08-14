#include <iostream>
#include <windows.h>

using namespace std;

int main() {

    int a,b,c;
    system("Color A");

    cout << "========================" << endl;
    cout << "Masukan Sisi A: ";
    cin >> a;
    cout << "Masukan Sisi B: ";
    cin >> b;
    cout << "Masukan Sisi C: ";
    cin >> c;
    cout << "========================"<< endl;

    if(a==b && a==c)
    {
        cout<<"Segitiga Sama Sisi"<<endl;
    }
    else if(a==b || a==c)
    {
        if(a!=b || a!=c)
        {
            cout<<"Segitiga Sama Kaki"<<endl;
        }
    }
    else
    cout<<"Segitiga sembarang"<<endl;

return 0;
}
