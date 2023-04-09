#include <iostream>
using namespace std;

int main() {
   int n, i;
   float arr[100], sum=0, avg;

   cout << "Masukkan jumlah elemen dalam array: ";
   cin >> n;

   cout << "Masukkan " << n << " angka dalam array:\n";
   for(i=0; i<n; i++) {
      cin >> arr[i];
      sum += arr[i];
   }

   avg = sum/n;
   cout << "Rata-rata dari array deret angka adalah: " << avg << endl;

   return 0;
}