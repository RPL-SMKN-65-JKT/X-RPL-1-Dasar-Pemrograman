#include <iostream>
using namespace std;


int main(){

    int jumlahorg;
    string orang;
    string orang1;
    string orang2;
    string orang3;
    int total;
    int hrgjam=1000;
    int hargaorg=20000;
    int hrgtot;
    int durasi;
    int durasi1;
    int durasi2;
    int durasi3;
    int jmldurasi;
    int bayar;

    char ulang;

    do{
    cout << "=========================" <<endl;
    cout << "|***Jasa Pijet Kretek***|" <<endl;
    cout << "|Harga Perorang Rp.10000|" <<endl;
    cout << "| Harga Perjam Rp.20000 |" <<endl;
    cout << "=========================" <<endl;
    cout << "Masukkan Jumlah Orang" <<endl; cin>>jumlahorg;

    switch(jumlahorg){
    case 1:
        cout<<"Orang 1"<<endl;
        cin>>orang;
        cout<<orang<<" Durasi Yang Di Inginkan "<<endl;
        cin>>durasi;
        hrgtot=hargaorg;
        jmldurasi=durasi*hrgjam;
        total=jmldurasi+hrgtot;
        cout<<"______________________________________"<<endl;
        cout<<"Totalnya     : "<<total<<endl;
        cout<<"Jumlah Bayar : "; cin>>bayar;
        cout<<"Kembali      : "<<bayar-total<<endl;
        break;
    case 2:
        cout<<"Orang 1"<<endl;
        cin>>orang1;
        cout<<orang1<<" Durasi Yang Di Inginkan "<<endl;
        cin>>durasi1;
        cout<<"______________________________________"<<endl;
        cout<<"Orang 2"<<endl;
        cin>>orang2;
        cout<<orang2<<" Durasi Yang Di Inginkan "<<endl;
        cin>>durasi2;
        durasi=durasi1+durasi2;
        hrgtot=hargaorg*2;
        jmldurasi=durasi*hrgjam;
        total=jmldurasi+hrgtot;
        cout<<"______________________________________"<<endl;
        cout<<"Totalnya     : "<<total<<endl;
        cout<<"Jumlah Bayar : "; cin>>bayar;
        cout<<"Kembali      : "<<bayar-total<<endl;
    case 3:
        cout<<"Orang 1"<<endl;
        cin>>orang1;
        cout<<orang1<<" Durasi Yang Di Inginkan "<<endl;
        cin>>durasi1;
        cout<<"______________________________________"<<endl;
        cout<<"Orang 2"<<endl;
        cin>>orang2;
        cout<<orang2<<" Durasi Yang Di Inginkan "<<endl;
        cin>>durasi2;
        cout<<"______________________________________"<<endl;
        cout<<"Orang 3"<<endl;
        cin>>orang3;
        cout<<orang3<<" DurasI Yang Di Inginkan "<<endl;
        cin>>durasi3;
        durasi=durasi1+durasi2+durasi3;
        hrgtot=hargaorg*3;
        jmldurasi=durasi*hrgjam;
        total=jmldurasi+hrgtot;
        cout<<"______________________________________"<<endl;
        cout<<"Totalnya     : "<<total<<endl;
        cout<<"Jumlah Bayar : "; cin>>bayar;
        cout<<"Kembali      : "<<bayar-total<<endl;
    default:
        cout<<" Maksimal 3 Orang "<<endl;
        goto ulangan;
    }

        cout<<endl;
    ulangan:
        cout<<"______________________________________"<<endl;
        cout<<"Apakah Anda Ingin Mengulang(yt)"<<endl;
        cin>>ulang;
    }
    while(ulang = 'y');

    cout<<"Terima Kasih"<<endl;
}
