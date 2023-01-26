#include <iostream>
using namespace std;

int main() {
    system ("color a") ;

    int A;
    int I;
    int sum = 0;

    cout << "PILIH B: ";
    cin >> I;

        for(A = 1; A < I; A++){
            sum = sum + A;
            cout << sum << endl;
        }


}
