#include <iostream>
using namespace std;

int main()  {

    int tahun;

    cout << "ketik tahun" << endl;
    cin >> tahun;

    if (tahun % 4 == 0) {
        cout << "tahun kabisat cuy";
    }
    else
        cout << "bukan tahun kabisat";

    return 0;

}
