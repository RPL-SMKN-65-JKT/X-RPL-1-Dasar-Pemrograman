#include <iostream>
using namespace std;

int main() {

int tahun;

cout << "Type Tahun: ";
cin >> tahun;

    if (tahun%4==0)
        cout << "Tahun Kabisat";

    else
        cout << "Bukan Tahun Kabisat";

    return 0;
}
