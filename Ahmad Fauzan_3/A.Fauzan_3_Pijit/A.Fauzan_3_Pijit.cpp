#include <iostream>
using namespace std;


int main(){

    int jumlahorg;
    string orang;
    string orang1;
    string orang2;
    string orang3;
    string orang4;
    int total;
    int hrgjam=1000;
    int hargaorg=20000;
    int hrgtot;
    int durasi;
    int durasi1;
    int durasi2;
    int durasi3;
    int durasi4;
    int jmldurasi;
    int bayar;

    char ulang;

    do{
    system("CLS");
    cout<<"Pijit kretek by:Ahmad Fauzan(3) xpplg1"<<endl;
    cout<<"Harga perorang:20.000 ";
    cout<<"Perjam:1.000"<<endl;
    cout<<"______________________________________"<<endl;
    cout<<"Masukkan jumlah orang = "; cin>>jumlahorg;

    switch(jumlahorg){
    case 1:
        cout<<"Orang 1"<<endl;
        cin>>orang;
        cout<<orang<<" Berapa durasinya"<<endl;
        cin>>durasi;
        hrgtot=hargaorg;
        goto bayaran;
        break;
    case 2:
        cout<<"Orang 1"<<endl;
        cin>>orang1;
        cout<<orang1<<" Berapa durasinya"<<endl;
        cin>>durasi1;
        cout<<"______________________________________"<<endl;
        cout<<"Orang 2"<<endl;
        cin>>orang2;
        cout<<orang2<<" Breapa durasinya"<<endl;
        cin>>durasi2;
        durasi=durasi1+durasi2;
        hrgtot=hargaorg*2;
        goto bayaran;
    case 3:
        cout<<"Orang 1"<<endl;
        cin>>orang1;
        cout<<orang1<<" Berapa durasinya"<<endl;
        cin>>durasi1;
        cout<<"______________________________________"<<endl;
        cout<<"Orang 2"<<endl;
        cin>>orang2;
        cout<<orang2<<" Berapa durasinya"<<endl;
        cin>>durasi2;
        cout<<"______________________________________"<<endl;
        cout<<"Orang 3"<<endl;
        cin>>orang3;
        cout<<orang3<<" Berapa durasinya"<<endl;
        cin>>durasi3;
        durasi=durasi1+durasi2+durasi3;
        hrgtot=hargaorg*3;
        goto bayaran;
    case 4:
        cout<<"Orang 1"<<endl;
        cin>>orang1;
        cout<<orang1<<" Berapa durasinya"<<endl;
        cin>>durasi1;
        cout<<"______________________________________"<<endl;
        cout<<"Orang 2"<<endl;
        cin>>orang2;
        cout<<orang2<<" Berapa durasinya"<<endl;
        cin>>durasi2;
        cout<<"______________________________________"<<endl;
        cout<<"Orang 3"<<endl;
        cin>>orang3;
        cout<<orang3<<" Berapa durasinya"<<endl;
        cin>>durasi3;
        cout<<"______________________________________"<<endl;
        cout<<"Orang 4"<<endl;
        cin>>orang4;
        cout<<orang4<<" Berapa durasinya"<<endl;
        cin>>durasi4;
        durasi=durasi1+durasi2+durasi3+durasi4;
        hrgtot=hargaorg*4;
        goto bayaran;
    default:
        cout<<"Hanya 4 orang dalam satu grup"<<endl;
    }
    bayaran:
        jmldurasi=durasi*hrgjam;
        total=jmldurasi+hrgtot;
        cout<<"______________________________________"<<endl;
        cout<<"Totalnya     : "<<total<<endl;
        cout<<"Jumlah Bayar : "; cin>>bayar;
        cout<<"Kembali      : "<<bayar-total<<endl;

        cout<<endl;

        cout<<"______________________________________"<<endl;
        cout<<"Apakah Anda Ingin Mengulang(yt)"<<endl;
        cin>>ulang;
    }
    while(ulang = 'y');

    cout<<"Terima Kasih"<<endl;
}
