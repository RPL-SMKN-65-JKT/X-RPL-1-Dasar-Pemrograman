#include <iostream>
using namespace std;

int main(){

    int angka;

    system ("color b");
    cout << "ketik angkanya = ";
    cin >> angka;

    switch (angka){
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
        case 5:
        cout << "lima";
        break;

    default:
        cout << "angka yang anda ketik salah";

}

  return 0;

}
