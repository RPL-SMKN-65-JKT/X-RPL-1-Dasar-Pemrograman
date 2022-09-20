#include <iostream>

using namespace std;

int main()
{
  int pilihan,harga1,harga2;
  char ulang;
  do
  {
    cout << "##  Daftar Menu   ##" << endl;
    cout << "==============================" << endl;
    cout << "1. Gado-gado Rp15000" << endl;
    cout << "2. Karedok Rp15000" << endl;
    cout << endl;

    cout << "Pilihan anda: ";
    cin >> pilihan;

    switch(pilihan){
    case 1:
        cout << "Anda memilih Gado-gado" << endl;
        harga1=15000;
        break;
    case 2:
        cout << "Anda memilih Karedok" << endl;
        harga2=15000;
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
}
