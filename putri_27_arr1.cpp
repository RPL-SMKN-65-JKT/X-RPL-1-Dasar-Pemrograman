#include <iostream>

int main() {
    int n; // Jumlah angka dalam deret
    std::cout << "Masukkan jumlah angka dalam deret: ";
    std::cin >> n;

    int a = 0; // Angka pertama
    int b = 1; // Angka kedua
    int c;     // Angka berikutnya

    std::cout << "Deret angka Fibonacci: ";
    std::cout << a << " " << b << " "; // Cetak angka pertama dan kedua

    // Menggunakan loop untuk mencetak angka-angka berikutnya dalam deret Fibonacci
    for (int i = 3; i <= n; ++i) {
        c = a + b; // Hitung angka berikutnya dengan menjumlahkan angka sebelumnya
        std::cout << c << " "; // Cetak angka berikutnya
        a = b; // Perbarui angka pertama dengan angka kedua
        b = c; // Perbarui angka kedua dengan angka berikutnya
    }

    std::cout << std::endl;
    return 0;
}