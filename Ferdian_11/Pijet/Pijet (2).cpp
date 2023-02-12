#include <iostream>
#include <string>
using namespace std;

int main(){

    int jumlah;
    string orang;
    int durasi;
    int total_durasi=0;
    int harga_perorang=20000;
    int harga_perjam=1000;
    int total;
    int total_orang;
    int total_semua;
    int i=1;
    char tanya;
do{

    cout <<"<<<<< Jasa Pijet Kretek >>>>>" <<endl;
    cout <<"Harga Perorang=RP.20.000" <<endl;
    cout <<"Harga Perjam=Rp.1.000" <<endl;
    cout <<"Masukan Jumlah orang: " <<endl;
    cin >>jumlah;

    while(i<=jumlah){
            system ("color F0");
            cout <<"Masukan Nama Orang"<<" "<<i<<endl;
            cin >>orang;
            cout <<"Berapa Lama durasinya?"<<endl;
            cin >>durasi;
            total_orang=durasi*harga_perjam+harga_perorang;
            cout <<"Harga: "<<total_orang<<endl;
            total=jumlah*harga_perorang;
            total_durasi=durasi+total_durasi;

    i++;
   }
    total_durasi=total_durasi*harga_perjam;
    total_semua=total+total_durasi;
   cout<<"Jumlah yang perlu dibayar adalah: "<<total_semua<<endl;
   cout <<"Apakah ingin mengulangnya? [y/n]"<<endl;
    cin >>tanya;
}while(tanya !='n');
 cout<<"<<<<<<Terima Kasih sudah memilih Pijet Kretek>>>>>>>>"<<endl;
return 0;
}
