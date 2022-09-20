#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    // inisialisasi variable terlebih dahulu.
    int jumlah_beli, bayar, diskon, jumlah[100], harga[100],total[50];
    float total_semua;
    string nama_barang[100];

    cout<<"===========================\n";
    cout<<"Program C++ Kasir Sederhana\n";
    cout<<"===========================\n\n";

    cout<<"Masukan Jumlah Beli :";
    cin>> jumlah_beli; //pembeli dan jumlah barang yang di beli.

    for (int i=0;i<jumlah_beli;i++){
        cout<<"\nMasukan Barang ke- "<<i+1<<"\n\n";
        cout<<"Nama Barang : ";
        cin>>nama_barang[i]; //input nama barang yang dibeli

        cout<<"Jumlah Barang : ";
        cin>>jumlah[i]; //input jumlah barang yang di beli

        cout<<"Harga Barang : ";
        cin>>harga[i]; //input harga perbarang

        total[i] = jumlah[i]*harga[i]; //jumlah harga total barang
        total_semua += total[i]; // menjumlahkan seluruh total barang

    }
    cout<<"\n===============";
    cout<<"\nCatatan Belanja";
    cout<<"\n===============";

    cout<<"\nNo Barang  Jumlah Harga Total\n";
    for (int i=0; i<jumlah_beli; i++ ){
        cout<<i+1<<setw(8)<<nama_barang[i]<<setw(10)<<jumlah[i]<<setw(12)<<harga[i]<<setw(12)<<total[i]<<endl;
    }

    //percabangan kondisi diskon
    if(total_semua>=100000){
        diskon=0.06*total_semua;
    }else if(total_semua>= 50000){
        diskon=0.04;
    }else if(total_semua>= 25000){
        diskon=0.02;
    }else{
        diskon=0;
    }

    cout<<"Jumlah Bayar : Rp."<<total_semua<<endl;
    cout<<"Diskon : Rp."<<diskon<<endl;
    cout<<"Total Bayar : Rp."<<total_semua - diskon<<endl;
    cout<<"Bayar : Rp.";
    cin>>bayar;
    cout<<"Kembalian : Rp."<<(bayar-(total_semua-diskon))<<endl;
    return 0;
}