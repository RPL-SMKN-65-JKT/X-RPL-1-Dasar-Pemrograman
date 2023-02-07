#include <iostream>
using namespace std;

int main() {
    system("color a");


        int n,x;
        int i = 1;
        int jum = 0;
        float av;

            cout << "Masukan angka: ";
            cin >> n;

        while(i <= n){
            cout << "Ingin angka nya berapa: ";
            cin >> x;
            jum = jum + x;
            i++;
        }
        av = jum/n;
        cout << "Rata rata nya adalah: " << av;
}
