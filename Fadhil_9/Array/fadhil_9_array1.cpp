#include <iostream>
using namespace std;

int main(){
    int jml_arr; //CARA MENGHITUNG JUMLAH ARRAY
    string kota[] = {"Jakarta", "Bandung", "Yogyakarta", "Bali", "Palembang"}; //ISI AWAL ARRAY
    jml_arr = sizeof(kota)/sizeof(*kota); //MENGHITUNG JUMLAH ARRAY

   for(int x = 0; x < jml_arr; x++){ //LOOPING UNTUK MEMUDAHKAN MENGHITUNG JUMLAH ARRAY
    cout << kota[x] << endl; //LOOPING UNTUK MEMUDAHKAN MENGHITUNG JUMLAH ARRAY
   } //LOOPING UNTUK MEMUDAHKAN MENGHITUNG JUMLAH ARRAY
}
