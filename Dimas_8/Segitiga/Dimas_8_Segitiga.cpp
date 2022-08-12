#include <iostream>

using namespace std;

//SISI A KIRI B BAWAH C KANAN

int main()
{
    int a;
    int b;
    int c;

    cout<<"KLASIFIKASI SEGITIGA\n";
    cout<<"SISI A(KANAN) SISI B(BAWAH) SISI C(KANAN)\n";
    cout<<"Masukan Sisi A: ";
    cin>>a;
    cout<<"Masukan Sisi B: ";
    cin>>b;
    cout<<"Masukan Sisi C: ";
    cin>>c;

    if (a==b && b==c)
       {
        cout<<"Segitiga Sama Sisi\n";
       }
    else if (a>b && b<c)
       {
        cout<<"Segitiga Sama Kaki\n";
       }
    else if (a<b && b>c)
       {
        cout<<"Segitiga Sama Kaki\n";
       }
    else if (a==b && b>c)
       {
        cout<<"Segitiga Sama Kaki\n";
       }
    else if (a==b && b<c)
       {
        cout<<"Segitiga Sama Kaki\n";
       }
    else if (a==c && b>c)
       {
        cout<<"Segitiga Sama Kaki\n";
       }
    else if (a==c && b<c)
       {
        cout<<"Segitiga Sama Kaki\n";
       }
    else if (b==c && a>c)
       {
        cout<<"Segitiga Sama Kaki\n";
       }
    else if (b==c && a<c)
       {
        cout<<"Segitiga Sama Kaki\n";
       }
    else
        cout<<"Segitiga Sembarang\n";


    return 0;
}
