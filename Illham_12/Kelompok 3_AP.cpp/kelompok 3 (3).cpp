#include <iostream>
using namespace std;
// Deklarasi Prosedur / Prototype Prosedur
// int a merupakan parameter formal
void Prosedur(int a);
void Prosedur2(int a);
// Fungsi Utama
int main(){
     int panjang = 5;
     cout<<"\n== Program Prosedur ==\n";
     // memanggil prosedur "Prosedur" dan "Prosedur2"
     // panjang merupakan parameter aktual
     Prosedur(panjang);
     Prosedur2(panjang);
}
void Prosedur(int panjang){
     int lebar, luas;
     cout<<"\n\nMasukkan Lebar Persegi Panjang keI : ";cin>>lebar;
     luas=panjang*lebar;
     cout<<"Luas Persegi Panjang keI = "<<panjang<<" x "<<lebar<<" = "<<luas<<endl;
}
// Prosedur
// dimisalkan int panjang sebagai parameter input
void Prosedur2(int panjang){
     int lebar, keliling;
     cout<<"\n\nMasukkan Lebar Persegi Panjang keII : ";cin>>lebar;
     keliling=(panjang+lebar)*2;
     cout<<"Keliling Persegi Panjang keII = ("<<panjang<<" + "<<lebar<<") x 2 = "<<keliling<<endl;
}
