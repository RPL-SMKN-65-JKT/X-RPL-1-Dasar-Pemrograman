#include <iostream>
using namespace std;

int LuasPersegi (int p, int l){
    int luas;
    luas = p*l;
    return luas;
}

int main()
{
    int a,b;

    cout << "panjang nya berapa: "; cin >> a;
    cout << "lebar nya berapa: "; cin >> b;

    cout << "Luas nya: " << LuasPersegi(a,b);
    return 0;
}
