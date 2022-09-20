#include <iostream>
using namespace std;
main (){
  int diskon,i,j, x, total;
  int bayar[10], hrga[10],jbrg[10], totali=0;
  char nama[30][x];

  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ WELCOME ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ SELAMAT DATANG DI KOPERASI SEKOLAH ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout<<"Menu Barang          Harga"<<endl;
    cout<<"1. PENSIL             Rp.  1500"<<endl;
    cout<<"2. PULPEN             Rp.  2000"<<endl;
    cout<<"3. BUKU               Rp.  5000"<<endl;
    cout<<"4. TIPE-X             Rp.  4000"<<endl;
    cout<<"5. ESKRIM TYPE A      Rp.  3000"<<endl;
    cout<<"6. ESKRIM TYPE B      Rp.  4000"<<endl;
    cout<<"7. BOLPOIN            Rp.  6500"<<endl;
cout<<"MASUKAN SESUAI BARANG DAN HARGANYA (KALAU SALAH POTONG GAJI)"<< endl;
  cout<<endl;
  cout<< "Masukkan Jumlah Barang Di Pesan oleh Siswa/Siswi= ";
  cin>>x;
  cout << endl;

 for(i=0;i<x;i++){
  cout<<"==============================="<<endl;
  cout<<endl;
  cout<< "Masukkan Nama Barang = ";
  cin>>nama[i];
  cout<< "Masukkan Harga Barang = Rp.";
  cin>>hrga[i];
  cout<< "Masukkan Jumlah Barang = ";
  cin>>jbrg[i];
  cout<<endl;
 }

system("cls");
for(i=0;i<x;i++){
 cout<<"Nama Barang = "<<nama[i]<<endl;
 cout<<"Harga Barang = Rp. "<<hrga[i]<<endl;
 cout<<"Jumlah Barang = "<<jbrg[i]<<endl;
 bayar[i]=hrga[i]*jbrg[i];
 cout<<"jumlah Belanja = "<<bayar[i]<<endl;
 cout<<endl;
 }

for(i=0; i<x; i++){
 totali=totali+bayar[i];
 cout<<"Sub total = "<<totali<<endl;
 }
if (totali>30000){
 diskon=0.1*totali;
 cout<<"Diskon 10% = Rp. "<<diskon<<endl;
 total=totali-diskon;
 cout<<"Total  = Rp. "<<total<<endl;
if (totali>40000){
 diskon=0.15*totali;
 cout<<"Diskon 15% = Rp. "<<diskon<<endl;
 total-totali-diskon;
 cout<< "Total = Rp. "<<total<<endl;
    }
 }
}
