#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main()
{
    int a,b,c;

    system("Color 9");

    cout <<"Masukan Semua Sisi Segitiga!"<< endl;
    cout <<"============================"<< endl;
    cout <<"sisi A : ";
    cin >> a;

    cout <<"sisi B : ";
    cin >> b;

    cout <<"sisi C : ";
    cin >> c;
    cout <<"============================"<< endl;

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


    system("pause");
    return 0;

}
