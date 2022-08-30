#include <iostream>
using namespace std;

int main(){

    char angka;

    cout << "Input angka (1 - 4): ";
    cin >> angka;

    switch (toupper(angka)) {
        case '1':
            cout << "Satu" << endl;
            break;
        case '2':
            cout << "Dua" << endl;
            break;
        case '3':
            cout << "Tiga" << endl;
            break;
        case '4':
            cout << "Empat" << endl;
            break;
        default:
            cout << "Angka Yang Anda Masukan Salah!" << endl;
    }

    return 0;
}
