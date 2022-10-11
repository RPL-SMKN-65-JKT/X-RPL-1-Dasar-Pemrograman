#include <iostream>
using namespace std;

int main()
{
  int pilihan;
  char ulang;
  do
  {
    cout << "##  Daftar Menu yahuuddd  ##" << endl;
    cout << "==============================" << endl;
    cout << "1. Thai Tea Latte = 12k" << endl;
    cout << "2. Thai Black Tea = 14k" << endl;
    cout << "3. chocolate      = 10k" << endl;
    cout << "4. Thai Lemon Tea = 14k" << endl;
    cout << "5. Thai milk tea  = 8k" << endl;
    cout << endl;

    cout << "Pilihan anda: ";
    cin >> pilihan;

    switch(pilihan){
    case 1:
        cout << "Anda memilih Thai Tea Latte" << endl;
        cout<<"\n==Pesanan Anda==\n";
        cout<<"Minuman: Thai Tea Latte"<< endl;
        cout<<"Total: 12.000 "<< endl;
        break;
    case 2:
        cout << "Anda memilih Thai Black Tea" << endl;
        cout<<"\n==Pesanan Anda==\n";
        cout<<"Minuman: Thai Black Tea"<< endl;
        cout<<"Total: 14.000 "<< endl;
        break;
    case 3:
        cout << "Anda memilih chocolate" << endl;
        cout<<"\n==Pesanan Anda==\n";
        cout<<"Minuman: chocolate"<< endl;
        cout<<"Total: 10.000 "<< endl;
        break;
    case 4:
        cout << "Anda memilih Thai Lemon Tea" << endl;
        cout<<"\n==Pesanan Anda==\n";
        cout<<"Minuman: Thai Lemon Tea"<< endl;
        cout<<"Total: 14.000 "<< endl;
        break;
    case 5:
        cout << "Anda memilih Thai milk tea" << endl;
        cout<<"\n==Pesanan Anda==\n";
        cout<<"Minuman: Thai Milk Tea"<< endl;
        cout<<"Total: 8.000 "<< endl;
        break;
    default:
        cout << "Menu tidak tersedia" << endl;
    }

    cout << endl;
    cout << "Ingin memilih menu lain (y/t)? ";
    cin >> ulang;
    cout << endl;
  }

  while (ulang!= 't');

  cout << "Terimakasih...";

  cout << endl;
  return 0;
}\
