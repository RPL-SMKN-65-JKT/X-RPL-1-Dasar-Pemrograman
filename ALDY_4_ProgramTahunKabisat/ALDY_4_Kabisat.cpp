#include <iostream>
using namespace std;

int main () {

int year;

cout << "Type year: ";
cin >> year;

    if (year%4==0)
        cout << "Tahun Kabisat";

    else
        cout << "Bukan Tahun Kabisat";

    return 0;
}
