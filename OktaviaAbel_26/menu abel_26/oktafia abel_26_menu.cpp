#include <iostream>

using namespace std;

int main(){
  int pilihan;
  char ulang;
  do
  {
    cout << "## Daftar Menu KFC ##" << endl;
    cout << "=====================" << endl;
    cout << "1. Super Besar 1" << endl;
    cout << "2. Super Besar 2" << endl;
    cout << "3. Super Star 1 " << endl;
    cout << "4. Super Star 2 " << endl;
    cout << "5. Super Star 3 " << endl;
    cout << "6. Kombo BBQ Burger" << endl;
    cout << "7. Crispy Box" << endl;
    cout << "8. Signature Box" << endl;
    cout << endl;

    cout << "Pilihan anda: ";
    cin >> pilihan;

    switch(pilihan){
    case 1:
        cout << "Anda memilih Super Besar 1" << endl;
        break;
    case 2:
        cout << "Anda memilih Super Besar 2" << endl;
        break;
    case 3:
        cout << "Anda memilih Super Star 1" << endl;
        break;
    case 4:
        cout << "Anda memilih Super Star 2" << endl;
        break;
    case 5:
        cout << "Anda memilih Suoer Star 3" << endl;
        break;
    case 6:
        cout << "Anda memilih Kombo BBQ Burger" << endl;
        break;
    case 7:
        cout << "Anda memilih Crispy Box" << endl;
        break;
    case 8:
        cout << "Anda memilih Signature Box" << endl;
        break;
    default:
        cout << "Menu tidak bersedia" << endl;
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