#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah angka: ";
    cin >> n;

    int deret[n];
    int i = 0;
    while (i < n) {
        cout << "Masukkan angka ke-" << i+1 << ": ";
        cin >> deret[i];
        i++;
    }

    int total = 0;
    i = 0;
    while (i < n) {
        total += deret[i];
        i++;
    }

    float rata = (float) total / n;
    cout << "Rata-rata: " << rata << endl;

    return 0;
}
