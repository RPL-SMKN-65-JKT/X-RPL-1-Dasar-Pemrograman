#include <iostream>

using namespace std;

int main()
{
    int a,b;

    cout <<"Tulis Angka A : ";
    cin >> a;
    cout <<"Tulis Angka B : ";
    cin >> b;

    if (a > b)
    {
        cout<<"Bilangan Terbesar " << a << endl;
    }
    else
    {
        cout << "Bilangan Terbesar " << b << endl;
    }
    return 0;
}