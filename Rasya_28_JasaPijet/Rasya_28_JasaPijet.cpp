#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
    int nama, pemijat, harga, lama, bayar;
    string nnama, npemijat;
    char ulang;
    do{
    cout<<"Jasa Pijet Kretek Abal Abal"<<endl;
    cout<<endl;
    cout<<"No\\ Nama Pemijat\\ Harga Per/jam "<<endl;
    cout<<"1.\\ Bapak Samsudin   \\ Rp:50.000"<<endl;
    cout<<"2.\\ Bu Ceunah  \\ Rp:75.000"<<endl;
    cout<<"3.\\ Bapak Asep   \\ Rp:100.000"<<endl;
    cout<<"************"<<endl;
    cout<<endl;
    cout<<"Nama: ";
    cin>>nnama;
    cout<<"Pilh Pemijat Kretek: ";
    cin>>pemijat;
    if (pemijat==1)
    {
    harga=50000;
    npemijat="Bapak Samsudin";
    }
    else if (pemijat==2)
    {
    harga=75000;
    npemijat="Bu Ceunah";
    }
    else if (pemijat==3)
    {
    harga=100000;
    npemijat="Bapak Asep";
    }
    cout<<"Pemijat yang anda pilih adalah "<<npemijat<<" dengan harga Rp:"<<harga<<"/jam"<<endl;
    cout<<"Berapa jam anda ingin menggunakan jasa pijat Kretek tersebut : ";
    cin>>lama;
    bayar=lama*harga;
    cout<<endl;
    cout<<"Nama anda : "<<nnama<<endl;
    cout<<"Pemijat Kretek pilihan anda : "<<npemijat<<endl;
    cout<<"Lama pijet anda : "<<lama<<" jam"<<endl;
    cout<<"Total harga jasa yang harus anda bayar adalah Rp. "<<bayar<<endl;
    cout << endl;

    cout << "Ada yang ingin menggunakan pijat lagi (y/t)? ";
    cin >> ulang;
    cout << endl;
    }
    while (ulang!='t');
    cout <<"terimakasih sudah memakai jasa pijet kretek kami....";
    cout << endl;

    return 0;
    }
