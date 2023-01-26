#include <iostream>
using namespace std;

int main() {
    int n;
    int i;
    int sum = 0;
    system("color b0");

    cout << "Pilih jumlah N: ";
    cin >> n;
        for(i = 1; i <= n; i++){
            sum = sum + i;
            cout << sum << endl;
        }
    return 0;
}
