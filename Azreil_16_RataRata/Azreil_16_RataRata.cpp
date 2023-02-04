#include <iostream>
using namespace std;

int main() {

system("color b");

    int i = 1;
    int n,x;
    int sum = 0;
    float av;

    cout << "Masukan nilai: ";
    cin >> n;

        cout << "" << endl;

        while(i <= n){
            cout << "Ingin berapa saja angka nya: ";
            cin >> x;
            sum = sum + x;
            i++;
        }
     cout << "" << endl;
    (i > n);
    av = sum/n;
    cout << "Rata rata nya adalah " << av;


}
