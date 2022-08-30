#include <iostream>

using namespace std;

int main()
{
    int angka;
    cout << "Pilih Angka Dari 1-4 " <<endl;
    cin >> angka;

    switch((angka))
    {
    case (1):
        cout <<"Satu";
        break;
    case (2):
        cout <<"Dua";
        break;
    case (3):
        cout <<"Tiga";
        break;
    case (4):
        cout <<"Empat";
        break;
    default:
        cout <<"angka yang dimasukkan salah"<<endl;
    }
 return 0;
}
