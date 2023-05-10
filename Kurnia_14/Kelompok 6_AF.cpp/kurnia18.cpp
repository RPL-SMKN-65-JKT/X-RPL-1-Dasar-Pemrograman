#include <iostream>

using namespace std;

// Fungsi untuk menghitung luas segitiga
float hitung_luas_segitiga(float alas, float tinggi) {
  float luas = (alas * tinggi) / 2;
  return luas;
}

int main() {
  float a, t;
  cout << "Masukkan nilai alas segitiga: ";
  cin >> a;
  cout << "Masukkan nilai tinggi segitiga: ";
  cin >> t;

  float luas = hitung_luas_segitiga(a, t);
  cout << "Luas segitiga adalah: " << luas << endl;
  return 0;
}
