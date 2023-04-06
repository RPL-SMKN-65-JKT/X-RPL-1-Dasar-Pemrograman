#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah angka: ";
    cin >> n;

    // Deklarasi array dengan ukuran sejumlah n
    int arr[n];

    // Input nilai dari user ke dalam array
    cout << "Masukkan " << n << " angka:\n";
    for (int i = 0; i < n; i++) {
        cout << "Angka ke-" << i+1 << ": ";
        cin >> arr[i];
    }

    // Hitung total dari seluruh elemen pada array
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }

    // Hitung rata-rata dari seluruh elemen pada array
    float rata = (float)total / n;

    // Tampilkan hasil rata-rata
    cout << "Rata-rata dari " << n << " angka adalah: " << rata << endl;

    return 0;
}