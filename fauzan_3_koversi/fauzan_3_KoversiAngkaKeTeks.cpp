#include <iostream>
using namespace std;

int main(){

int angka;

cout << "^^^^^^^^^^^^^^^^"<<endl;
cout << "ketik angka satu - empat"<<endl;
cin >> angka;
cout << "^^^^^^^^^^^^^^^^"<<endl;

    switch (angka) {
    case 1:
         cout << "satu";
         break;
    case 2:
        cout << "dua";
        break;
    case 3:
        cout << "tiga";
        break;
    case 4:
        cout << "empat";
        break;
    default:
        cout << "angka yang dimasukkan salah";

    }
    return 0;
}
