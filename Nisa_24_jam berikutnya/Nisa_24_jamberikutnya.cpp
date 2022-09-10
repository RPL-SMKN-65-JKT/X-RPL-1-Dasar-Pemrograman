#include <iostream>
using namespace std;

int main() {

    typedef struct {
             int hh;
             int mm;
             int ss;
        }jam;
    jam j;



system("color a");
cout << "Jam      = ";
cin >> j.hh;
cout << "Menit    = ";
cin >> j.mm;
cout << "Detik    = ";
cin >> j.ss;

    cout << "=============================" << endl;
    if (j.hh + 1)
        cout << "Sekarang Jam " << j.hh << endl;
    else
        cout << "Sekarang Jam " << j.hh << endl;

    if (j.mm + 1)
        cout << "Sekarang Menit " << j.mm << endl;
    else
        cout << "Sekarang Menit " << j.mm << endl;

    if (j.ss + 1)
        cout << "Sekarang Detik " << j.ss << endl;
    else
        cout << "Sekarang Detik " << j.ss << endl;
        cout << "=============================" << endl;


int hasil;
int jumlah;
int tambah;

    hasil = j.hh + 1;
    jumlah = j.mm + 1;
    tambah = j.ss + 1;


    cout << "Jam Sekarang: " << hasil << endl;
    cout << "Menit Sekarang: " << jumlah << endl;
    cout << "Detik Sekarang: " << tambah << endl;
    cout << "=============================" << endl;
    cout << hasil << ":" << jumlah << ":" << tambah << endl;



    return 0;
}

