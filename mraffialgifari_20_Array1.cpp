#include <iostream>
using namespace std;

int main() {
   int arr[10]; // deklarasi array dengan panjang 10

   // mengisi nilai ke dalam array
   for(int i=0; i<10; i++) {
      arr[i] = i;
   }

   // menampilkan nilai dari array
   for(int i=0; i<10; i++) {
      cout << "Nilai arr[" << i << "] = " << arr[i] << endl;
   }

   return 0;
}

