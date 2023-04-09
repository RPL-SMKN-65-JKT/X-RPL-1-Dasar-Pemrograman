#include <iostream>

using namespace std;

int main()
{
  // Data type dan Array
  int array[100], i, n;
  int rata, total = 0;
  
  cout << "Masukkan Banyaknya Elemen Array: " << endl;
  cin >> n;

  for (i = 0; i < n; i++){ // Initialization, Condition, Increment
    cout << "Nilai Ke " << i+1 << " "; 
    cin >> array[i];
    total = total + array[i]; // Menghitung Jumlah Array
  }

  rata = total/n;  // Menghitung Jumlah Array
  
  // Statement
  cout << "Rata-Ratanya Adalah : " << rata << endl;
}
