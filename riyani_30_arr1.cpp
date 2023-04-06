#include <iostream>
using namespace std;

int main() {
    int n;
    float arr[10], sum = 0.0, avg;

    // Meminta user untuk menginputkan jumlah elemen dalam array
    cout << "Masukkan jumlah elemen dalam array: ";
    cin >> n;

    // Meminta user untuk menginputkan elemen dalam array
    int i = 0;
    do {
        cout << "Masukkan elemen ke-" << i+1 << ": ";
        cin >> arr[i];
        sum += arr[i];
        i++;
    } while (i < n);

    // Menghitung rata-rata
    avg = sum / n;

    // Menampilkan hasil
    cout << "Rata-rata dari deret angka yang diinputkan adalah: " << avg << endl;

    return 0;
}