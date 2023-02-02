#include <iostream>
using namespace std;

int main() {

system("color 2");

    int i = 1;
    int n,x;
    int sum = 0;
    float av;

    cout << "Ketik N: ";
    cin >> n;
    cout << "Ketik X: ";
    cin >> x;

        while(i <= n){
            sum = sum + x;
            i = i + 1;
            cout << x << endl;
        }
    (i > n);
    av = sum/n;
    cout << av << endl;


}
