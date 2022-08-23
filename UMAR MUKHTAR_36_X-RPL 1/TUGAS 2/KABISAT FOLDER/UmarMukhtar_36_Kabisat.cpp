#include <iostream>
using namespace std;
int main(){

    int tahun;

    cout << "MASUKAN TAHUN: ";
    cin >> tahun;

    if (tahun%4 == 0){
        cout << tahun << " Merupakan tahun kabisat\n";
    } else {
        cout << tahun << "Bukan tahun kabisat\n";
    }
}
