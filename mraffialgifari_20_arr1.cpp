#include <iostream>
using namespace std;

int main() {
   int n;
   cout << "Masukkan jumlah elemen: ";
   cin >> n;

   // Membuat array dengan ukuran n dan tipe data yang ditentukan oleh pengguna
   // Tipe data dapat diubah sesuai dengan preferensi pengguna
   int arr[n];

   // Meminta pengguna memasukkan nilai-nilai ke dalam array
   for(int i = 0; i < n; i++) {
      cout << "Masukkan elemen ke-" << i + 1 << ": ";
      cin >> arr[i];
   }

   // Menghitung rata-rata
   float total = 0;
   for(int i = 0; i < n; i++) {
      total += arr[i];
   }
   float rata_rata = total / n;

   // Menampilkan hasil
   cout << "Rata-rata dari deret angka adalah: " << rata_rata << endl;

   return 0;
}
