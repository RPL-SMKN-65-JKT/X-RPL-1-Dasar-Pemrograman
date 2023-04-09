#include <iostream>
using namespace std;
//deklarasi array
float A[5];
float j, t, r;
  
int main(){
 
  //Menampilkan elemen data
  for (int i=1; i <= 5; i++){
       cout << "Masukkan nilai array ke-" << i << ": ";
       cin >> A[i];
       t = t + A[i];
  }
  
  //Melakukan seleksi jumlah dan rata-rata
  j = sizeof(A)/sizeof(A[0]);
  r = t/j;
  
  //Menampilkan nilai jumlah, total, rata-rata
  cout << "Jumlah Elemen Array: " << j << endl;
  cout << "Total Array: " << t << endl;
  cout << "Rata-rata Array: " << r << endl;
  }
  