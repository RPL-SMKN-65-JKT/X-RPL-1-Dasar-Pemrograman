#include <iostream>
using namespace std;

int main() {
    system ("color b") ;

    int a;
    int b;
    int sum = 0;

    cout << "PILIH B: ";
    cin >> b;

        for(a = 1; a < b; a++){
            sum = sum + a;
            cout << sum << endl;
        }


}
