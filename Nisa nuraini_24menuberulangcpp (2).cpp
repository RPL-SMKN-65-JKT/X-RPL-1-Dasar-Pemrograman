#include <iostream>
 using namespace std;
 
int main()
{
  int pilihan;
  char ulang;
  do
  {
    cout << "##  Daftar Menu Kopi Ilkom  ##" << endl;
    cout << "==============================" << endl;
    cout << "1. Espresso" << endl;
    cout << "2. Cappuccino" << endl;
    cout << "3. Moccacino " << endl;
    cout << "4. Vanilla Latte" << endl;
    cout << "5. Hazelnut Latte" << endl;
    cout << endl;
 
    cout << "Pilihan anda: ";
    cin >> pilihan;
 
    switch(pilihan){
    case 1:
        cout << "Anda memilih Espresso" << endl;
        break;
    case 2:
        cout << "Anda memilih Cappuccino" << endl;
        break;
    case 3:
        cout << "Anda memilih Moccacino" << endl;
        break;
    case 4:
        cout << "Anda memilih Vanilla Latte" << endl;
        break;
    case 5:
        cout << "Anda memilih Hazelnut Latte" << endl;
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