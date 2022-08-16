#include <iostream>

using namespace std;

int main() {

    int x;

    cout << "Masukan Bilangan: \n";
    cin >> x;

    if (x % 2 == 0) {
        cout << "Genap";
    }
    else
        cout << "Ganjil";

    return 0;
}
