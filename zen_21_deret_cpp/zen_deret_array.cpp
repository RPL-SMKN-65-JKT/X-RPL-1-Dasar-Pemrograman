#include <iostream>

using namespace std;

int main(){
    //deklarasi array
    int n,i;
    float sum = 0,avg;
    cout << "Masukan Angka; "  << endl;
    cin >> n;

    int a[n]; //mendeklarasikan array dengan sesuai yang diinginkan input oleh user
    cout << "Masukan nilai-nalai yang ingin dihitung:" << endl;
    for (i =1; i < n; i++){
        cin >> a[i]; //mengisi array dengan iinput user
        sum += a[i]; //menjumlahkan nilai dari setiap elemen array
    }

     avg = sum / n; //mengitung hasil rata-rata
     cout << "Rata-rata dari nilai yang dimasukan adalah: " << avg << endl;
     return 0;
     }
