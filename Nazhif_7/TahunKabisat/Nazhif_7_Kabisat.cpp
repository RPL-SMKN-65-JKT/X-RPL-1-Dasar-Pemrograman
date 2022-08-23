#include <iostream>

using namespace std;

int main() {

    int tahun;

    cout << "Masukkan tahun: \n";
    cin >> tahun;

    if (tahun%4==0) {
        cout << "Tahun Kabisat" << endl;
    }
    else {
        cout << "Bukan Tahun Kabisat" << endl;
    }

    return 0;
}
