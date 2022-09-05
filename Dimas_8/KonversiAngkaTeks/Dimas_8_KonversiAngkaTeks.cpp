#include <iostream>

using namespace std;

int main()
{
    int angka;

    cout << "Inputkan angka (1-4): ";
    cin >> angka;

    switch (toupper(angka)){
        case 1:
            cout << "satu" << endl;
            break;
        case 2:
            cout << "dua" << endl;
            break;
        case 3:
            cout << "tiga"<< endl;
            break;
        case 4:
            cout << "empat" << endl;
            break;
        default:
            cout << "angka yang dimasukan salah" << endl;
    }

    return 0;
}

