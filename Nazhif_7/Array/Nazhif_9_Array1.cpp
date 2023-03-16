#include <iostream>

using namespace std;

int main(){

    int jumlah_array;
    string makanan[] = {"Batagor", "Kue Lapis", "Siomay", "Martabak", "Pempek"};
    jumlah_array = sizeof(makanan) / sizeof(*makanan); // Menghitung Jumlah Array

   for(int x = 0; x < jumlah_array; x++){ // Initialization, Condition, Increment
    cout << makanan[x] << endl; // Statement
   }
   return 0;
}
