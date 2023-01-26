#include <iostream>
 
using namespace std;
 
int main()
{
 cout << "##  Program C++ Deret Angka  ##" << endl;
 cout << "===============================" << endl;
 cout << endl;
 
 int jumlah_deret,i;
 
 cout << "Jumlah deret yang diinginkan: ";
 cin >> jumlah_deret;
 
 cout << endl;
 for (i=1;i<=jumlah_deret;i++) {
    cout << i << " ";
 }
 
 cout << endl;
 return 0;
}