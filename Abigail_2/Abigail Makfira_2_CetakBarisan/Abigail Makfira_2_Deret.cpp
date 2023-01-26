#include <iostream>
using namespace std;

int main() {
    system ("color b") ;

    int i;
    int n;
    int sum = 0;

    cout << "pilih i";
    cin >> n;

        for(i = 1; i < n; i++){
            sum = sum + i;
            cout << sum << endl;
        }


}
