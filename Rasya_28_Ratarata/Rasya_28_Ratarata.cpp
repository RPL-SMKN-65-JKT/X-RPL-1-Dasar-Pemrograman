#include <iostream>
using namespace std;

int main() {

    int i = 1;
    int n,x;
    int sum = 0;
    float av;

    cout << "Input Nilai: ";
    cin >> n;

        cout << "" << endl;

        while(i <= n){
            cout << "Input angka: ";
            cin >> x;
            sum = sum + x;
            i++;
        }
     cout << "" << endl;
    (i > n);
    av = sum/n;
    cout << "Rata rata nya adalah " << av;


}
