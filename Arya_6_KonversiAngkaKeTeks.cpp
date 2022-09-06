//PROGRAM KONVERSI ANGKA KE TEKS
#include <iostream>
using namespace std;

int main () {

int angka;

cout<< "Ketik Angka Dari 1 - 4:";
cin >> angka;

    switch (angka) {
    case 1:
        cout << "Satu";
        break;
    case 2:
        cout << "Dua";
        break;
    case 3:
        cout << "Tiga";
        break;
    case 4:
        cout << "Empat";
        break;
    default:
        cout << "Angka Yang Dimasukan Salah";
}
return 0;
}
