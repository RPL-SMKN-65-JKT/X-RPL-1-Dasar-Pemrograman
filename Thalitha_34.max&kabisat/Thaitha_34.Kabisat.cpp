#include <iostream>
using namespace std;
int main () {

    int tahun;

    cout << "tahun" << endl;
    cin >> tahun;

    if (tahun % 4 == 0) {
        cout << "tahun kabisat";
    }
    else
        cout << "bukan tahun kabisat";

    return 0;
}
