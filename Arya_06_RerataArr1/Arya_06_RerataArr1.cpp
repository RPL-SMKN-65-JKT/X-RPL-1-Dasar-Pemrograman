#include <iostream>// untuk menangani input output program
#include <conio.h>//untuk menahan layar agar tidak tertutup secara otomatis melalui function getch().
using namespace std;
int main()
  {
    int i;//Variabel i berfungsi untuk inisialisasi nilai awal pada perulangan for. nilai dari variabel ini akan dilakukan increment yang nantinya akan dipakai untuk mengakses index array.
    int n;//Variabel n berfungsi untuk jumlah nilai yang akan kita hitung rata-ratanya. variabel ini juga menjadi batas pada kondisi didalam perulangan for.
    int data[35];//variabel array data[35] adalah variabel array yang akan kita tampung dari setiap nilai yang diinputkan oleh user. disini saya membuat ukuran kapasitas array tersebut sebanyak 35 space.
    float rata;//Variabel rata berfungsi untuk menampunng hasil dari nilai total (jum) yang dibagi dengan jumlah data (n).
    float jum;//Variabel jum berfungsi untuk menampung nilai total dari keseluruhan data yang dijumlahkan.
    cout<<"Data Berat Badan Siswa X PPLG 1"<<endl;
    cout<<"Banyaknya Siswa X PPLG 1 = ";
    cin>>n;
    cout<<endl;

    for (i=0; i<n; i++)
        {
           cout<<"Berat Badan Siswa ke-"<<i+1<<" = ";
           cin>>data[i];
           jum += data[i];
        }

    rata=jum/n;

    cout<<endl;
    cout<<"Total Berat Badan Siswa X PPLG 1 = "<<jum<<endl;
    cout<<"Rata-rata Berat Badan Siswa X PPLG 1  = "<<rata<<endl;
  getch();
  }
