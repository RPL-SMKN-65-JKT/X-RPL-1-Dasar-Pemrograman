#include <iostream>
using namespace std;
// Deklarasi Fungsi / Prototype Fungsi
// int a merupakan parameter formal
int Fungsi(int a);
// Fungsi Utama
int main(){
     int luas1, luas2, totalluas;
     int panjang = 5;
     cout<<"\n== Program Fungsi ==\n";
     // memanggil fungsi
     // panjang merupakan parameter aktual
     luas1 = Fungsi(panjang);
     luas2 = Fungsi(panjang);
     totalluas = luas1 + luas2;
     cout<<"\n\nLuas Gabungan Kedua Persegi Panjang adalah = "<<totalluas<<endl;

}
// Fungsi
// dimisalkan int panjang sebagai parameter input
int Fungsi(int panjang){
     int lebar, luas;
     cout<<"\n\nMasukkan Lebar Persegi Panjang : ";cin>>lebar;
     luas=panjang*lebar;
     cout<<"Luas Persegi Panjang adalah "<<panjang<<" x "<<lebar<<" = "<<luas;
     return luas;
}
