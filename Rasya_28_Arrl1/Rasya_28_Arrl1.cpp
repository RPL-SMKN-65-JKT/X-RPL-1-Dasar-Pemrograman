#include <iostream>
using namespace std;

int main() {
    int n[5]; // Memasukkan Type data beserta Jumlah index array
    int j,t,r; // Memasukkan Type data dan variabel

    for (int i=1; i<=5; i++){ // inisialisasi,condition dan increment
        cout<< "Masukkan Nilai ke- " << i << ": "; // Memasukkan nilai ke i agar angka bisa dijumlah
        cin>>n[i];
        t = t + n[i]; // rumus penjumlahan untuk menghitung total

    }
    j = sizeof(n)/sizeof(n[0]); // rumus menghitung jumlah, membagi n dengan n index ke 0
    r = t/j; // rumus rata rata dengan membagi hasil total dengan jumlah
    cout<<"Total : " << t <<endl;
    cout<<"Rata Rata : " << r <<endl;
    return 0;

}
