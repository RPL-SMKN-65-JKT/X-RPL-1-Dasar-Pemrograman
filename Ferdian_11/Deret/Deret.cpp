#include <iostream>
using namespace std;

int main(){
    int f;
    int h;
    int sum = 0;

    cout << "Pilih jumlah f: ";
    cin >> f;

    for(h=1; h< f; h++){
        sum = sum + h;
        cout << sum <<endl;
    }


  return 0;
}
