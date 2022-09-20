#include <iostream>
#include <string>

using namespace std;
 int main()
 {
  int pilihan;
  char ulang;
  do
  {
    cout << "## DAFTAR MENU SOLARIA ##" << endl;
    cout << "======================" << endl;
    cout << "1.nasi goreng RP 34.000" << endl;
    cout << "2.express bowl ayam mayo RP 27.000" << endl;
    cout << "3.cap cay goreng RP 48.000" << endl;
    cout << "4. family pack 2 RP 130.000" << endl;
    cout << "5. kweatiau goreng ayam RP 44.00)" << endl;
    cout << endl;

    cout << "pilihan anda: ";
    cin >> pilihan;

     switch(pilihan){
    case 1:
        cout << "Anda memilih nasi goreng" << endl;
        break;
    case 2:
        cout << "Anda memilih express bowl ayam mayo" << endl;
        break;
    case 3:
        cout << "Anda memilih cap cay goreng" << endl;
        break;
    case 4:
        cout << "Anda memilih family pack" << endl;
        break;
    case 5:
        cout << "Anda memilih kweatiau goren ayam" << endl;
        break;
    default:
        cout << "Menu tidak tersedia" << endl;
    }
      cout<<"\n==Pesanan Anda==\n";
        cout<<"nasi goreng"<< endl;
        cout<<"Total: 34.000 "<< endl;
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


