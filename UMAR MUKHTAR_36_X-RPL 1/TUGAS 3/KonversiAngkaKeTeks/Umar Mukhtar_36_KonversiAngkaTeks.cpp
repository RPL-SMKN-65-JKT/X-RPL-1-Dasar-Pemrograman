 #include <iostream>
using namespace std;

int main()
{
    int angka;
    cout << "angka:";
    cin >> angka;

    switch (angka)
    {
        case (1):
            cout << "satu";
            break;
        case (2):
            cout << "Dua";
            break;
        case (3):
            cout << "Tiga";
            break;
        case (4):
            cout << "Empat";
            break;
        default:
            cout << "angka yang dimasukan salah";
    }

    return 0;
}
