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
    cout<<"Jasa Pijet Kretek Asal Asalan"<<endl;
    cout<<endl;
    cout<<"No\\ Nama Pemijat\\ Harga Per/jam "<<endl;
    cout<<"1.\\ Mas Agus   \\ Rp:35.000"<<endl;
    cout<<"2.\\ Mas Asep  \\ Rp:50.000"<<endl;
    cout<<"3.\\ Mas Puad   \\ Rp:70.000"<<endl;
    cout<<"**********************************"<<endl;
    cout<<endl;
    cout<<"Nama Anda: ";
    cin>>nnama;
    cout<<"Pilh No Pemijat: ";
    cin>>pemijat;
    if (pemijat==1)
    {
    harga=35000;
    npemijat="Mas Agus";
    }
    else if (pemijat==2)
    {
    harga=50000;
    npemijat="Mas Asep";
    }
    else if (pemijat==3)
    {
    harga=70000;
    npemijat="Mas Puad";
    }
    cout<<"Pemijat yang anda pilih adalah "<<npemijat<<" dengan harga Rp:"<<harga<<"/jam"<<endl;
    cout<<"Berapa jam anda ingin menggunakan jasa pijat Kretek tersebut : ";
    cin>>lama;
    bayar=lama*harga;
    cout<<endl;
    cout<<"Nama anda : "<<nnama<<endl;
    cout<<"Pemijat Kretek yang anda pilih adalah: "<<npemijat<<endl;
    cout<<"Lama pijet anda : "<<lama<<" jam"<<endl;
    cout<<"Total harga jasa yang harus anda bayar adalah Rp. "<<bayar<<endl;
    cout << endl;

    cout << "Tekan Y jika anda ingin pijet lagi dan tekan T jika ingin berhenti pijet (Y/T)? ";
    cin >> ulang;
    cout << endl;
    }
    while (ulang!='t');
    cout <<"terimakasih sudah memakai jasa pijet kretek kami....";
    cout << endl;

    return 0;
    }
