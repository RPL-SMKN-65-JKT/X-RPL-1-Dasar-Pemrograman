#include <iostream>
using namespace std;
int main(){
  int array[100], i, n;
  float rata, total=0;
  cout << " :::::::::::::::::::::::::::::::::::::::::::::::::::::: " << endl;
  cout << " Contoh Program Menghitung Nilai Rata-rata dengan Array " << endl;
  cout << " :::::::::::::::::::::::::::::::::::::::::::::::::::::: " << endl;
  cout << " Masukkan total bagian dari array: ";
  cin >> n;
  for(i=0; i<n; i++){
    cout << "Identifikasi Nilai Ke-" << i+1 << " : ";
    cin >> array[i];
    total = total + array[i];
  }
  rata = total/n;
  cout << "Hasil dari nilai total adalah : " << total << endl;
  cout << "Hasil dari nilai rata-rata adalah : " << rata << endl;
  return 0;
}