#include <iostream>
#include <conio.h>
using namespace std;

int main(){

    cout << "Tugas Mencari Nilai Rata rata Pada Array" << endl;
    cout << endl;
    cout << "========================================" << endl;
    cout << endl;

    // Menyimpan data
    int input[1000], arr_count, x;
    int total, rata_rata;

    // Memasukan jumlah angka yang anda inginkan
    cout << "Masukan jumlah angka yang anda inginkan : ";
    cin >> arr_count;
    cout << endl;

    // Menyimpan angka inputan
    do {
            cin >> input[x];
    x++;
    } while (x < arr_count);


    cout << endl;

    // Mencari total angka
    total = input[0];
    for(x = 1; x < arr_count; x++) {
        total += input[x];
    }

    // Mencari nilai rata rata
    rata_rata = total / arr_count;

    // Menampilkan nilai rata rata
    cout << "Nilai rata rata dari " << arr_count << " inputan, adalah : " << rata_rata;
    cout << endl;
    getch();


}
