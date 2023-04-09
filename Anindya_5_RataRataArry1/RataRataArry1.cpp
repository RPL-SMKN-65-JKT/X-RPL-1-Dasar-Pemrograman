#include <iostream>
using namespace std;
int main(){

      //mendeklarasikan variable
      int arry[50];
      int a=1,v;
      float AV,sum=0;

      cout << "   - Menghitung nilai rata rata array -" << endl; //judul program
      cout << " " << endl;
      cout << "\t Masukkan jumlah array: "; //menginput banyaknya data kedalam variable v
      cin >> v;

      while (a<=v){ //melakukan perulangan
         cout << "> Masukkan nilai ke " << a << ": "; //menginputkan nilai
         cin >> arry[a];
         sum = sum + arry[a]; //melakukan penjumlahan dan hasilnya adalah nilai total
         a++;
      }
      AV = sum/v; //melakukan pembagian dan hasilnya adalah nilai rata rata
      cout <<"-----------------------"<<endl;
      cout <<"Hasil nilai total : " << sum <<endl; //menampilkan isi variable total
      cout <<"Hasil rata-rata : " << AV <<endl; //menampilkan isi variable total rata

   return 0; //mengakhri eksekusi
}
