#include <iostream>

using namespace std;

int main()
{

  int array[100], i, n;
  int rata, total = 0;

  cout << "Masukkan Banyaknya Elemen Array: " << endl;
  cin >> n;

  for (i = 0; i < n; i++){
    cout << "Nilai Ke " << i+1 << " ";
    cin >> array[i];
    total = total + array[i];
  }

  rata = total/n;

  cout << "Rata-Ratanya Adalah : " << rata << endl;
}
