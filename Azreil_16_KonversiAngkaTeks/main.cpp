 #include <iostream>
using namespace std;

int main()
{
    int angka;
    system("color a");
    cout << "Ketik Angka Dari 1-4 =  ";
    cin >> angka;

    switch (angka)
    {
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
            cout << "Salah Memasukan Angka";
    }

    return 0;
}
