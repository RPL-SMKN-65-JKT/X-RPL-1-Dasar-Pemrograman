#include <iostream>

using namespace std;

int main()
{
  cout << "##  Program C++ Cari Nilai Rata-rata  ##" << endl;
  cout << "=======================================" << endl;
  cout << endl;

  int input[100], arr_count, i;
  float total, rata2;

  cout << "Input jumlah element array: ";
  cin >> arr_count;

  cout << "Input "<< arr_count << " angka (dipisah dengan enter): " ;
  cout << endl;

  // simpan setiap angka yang diinput ke dalam array
  for(i = 0; i < arr_count; i++){
    cin >> input[i];
  }

  cout << endl;

  // cari total semua element array
  total = 0;
  for(i = 0; i < arr_count; i++){
    total = total+input[i];
  }

  // hitung nilai rata-rata
  rata2 = (total/arr_count);
  cout << "Nilai rata-rata dari "<< arr_count <<
          " inputan adalah: " << rata2;

  cout << endl;
  return 0;
}
