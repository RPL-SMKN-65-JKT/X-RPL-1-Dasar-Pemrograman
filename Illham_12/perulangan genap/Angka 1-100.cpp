#include <iostream>

using namespace std;

int main()
{
 cout << "##  Program C++ Deret Angka Genap  ##" << endl;
 cout << "=====================================" << endl;
 cout << endl;

 int jumlah_deret,i;

 cout << "Jumlah deret yang diinginkan: ";
 cin >> jumlah_deret;

 for (i=1;i<=jumlah_deret;i++) {
   cout << i * 2 << " ";
 }

 cout << endl;
 return 0;
}
