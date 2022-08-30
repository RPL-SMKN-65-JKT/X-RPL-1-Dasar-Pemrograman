#include<iostream>
using namespace std;
int main ()
{
    int  angka;

    cout << "Tulis angka (1-4):";
    cin >> angka;

    switch (angka){
        case 1:
            cout << "Satu" <<endl;
            break;
        case 2:
            cout << "Dua" << endl;
            break;
        case 3:
            cout << "Tiga" << endl;
            break;
        case 4:
            cout << "Empat" << endl;
            break;
        default:
            cout << "Angka yang di masukan salah!" << endl;
    }
    return 0;
}
