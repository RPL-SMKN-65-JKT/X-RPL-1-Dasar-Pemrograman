#include <iostream>

using namespace std;

int main()
{
    int p;
    int l;
    int t;
    int hasil;

    cout << "Masukan Panjang: ";
    cin >> p;
    cout << "Masukan Lebar: ";
    cin >> l;
    cout << "Masukan Tinggi: ";
    cin >> t;
    hasil = p*l*t;
    cout << "Hasilnya adalah: " << hasil;
    return 0;
}
