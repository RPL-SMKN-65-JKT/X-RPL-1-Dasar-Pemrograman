#include <iostream>
#include <conio.h>
#include <stdio.h>

// Credit Athaillah Nazhif Firdaus X RPL 1

using namespace std;

int main ()
{
    char kode_kota;
    char kelas;
    char kembali;
    int harga_tiket;
    int ppn;
    int jum_bayar;
    int bayar;
    int akhir;

    printf("\n================== HARGA TIKET BIS ======================\n");
    cout<<"\n==========================================================\n";
    cout<<"Tujuan Anda              Kelas             Kelas     \n";
    cout<<"                         Ekonomi(E)        Eksekutif(X)\n";
    cout<<"==========================================================\n";
    cout<<"1. Bogor                 Rp240.000         Rp270.000\n";
    cout<<"2. Yogyakarta            Rp350.000         Rp420.000\n";
    cout<<"3. Semarang              Rp480.000         Rp570.000\n";
    cout<<"==========================================================\n";
     printf("\n================== Pilih Kota Tujuan ======================\n");
    cout<<"\nMasukan Kode Kota ( 1 - 3 )            : ";
    cin>>kode_kota;

    switch(kode_kota)
    {
         case '1':
           cout<<"Kota Tujuan Anda: Bogor\n"<<endl;
           printf("\n================== Pilih Kelas Bis ======================\n");
           cout<<"\nMasukan Kode Kelas Bis [ E / X ]  : ";
           cin>>kelas;
           cout<<endl;
           if (kelas=='E')
            {
             harga_tiket=240000;
             ppn=35000;
             jum_bayar=harga_tiket+ppn;
             cout<<"Harga Tiket + PPN = Rp."<<jum_bayar<<endl;
             cout<<"Jumlah Bayar = "<<endl;
             cin>>bayar;

             akhir=bayar-jum_bayar;
             cout<< "Kembali: " << akhir << endl;
             break;
            }
            else if (kelas=='X')
            {
             harga_tiket=270000;
             ppn=38000;
             jum_bayar=harga_tiket+ppn;
             cout<<"Harga Tiket + PPN = Rp."<<jum_bayar<<endl;
             cout<<"Jumlah Bayar = "<<endl;
             cin>>bayar;

             akhir=bayar-jum_bayar;
             cout<< "Kembali: " << akhir << endl;
             break;
            }

          case '2':
           cout<<"Kota Tujuan Anda: Yogyakarta\n"<<endl;
           printf("\n================== Pilih Kelas Bis ======================\n");
           cout<<"\nMasukan Kode Kelas Bis [ E / X ]  : ";
           cin>>kelas;
           cout<<endl;
           if (kelas=='E')
            {
             harga_tiket=350000;
             ppn=45000;
             jum_bayar=harga_tiket+ppn;
             cout<<"Harga Tiket + PPN = Rp."<<jum_bayar<<endl;
             cout<<"Jumlah Bayar = "<<endl;
             cin>>bayar;

             akhir=bayar-jum_bayar;
             cout<< "Kembali: " << akhir << endl;
             break;
            }
            else if (kelas=='X')
            {
             harga_tiket=420000;
             ppn=48000;
             jum_bayar=harga_tiket+ppn;
             cout<<"Harga Tiket + PPN = Rp."<<jum_bayar<<endl;
             cout<<"Jumlah Bayar = "<<endl;
             cin>>bayar;

             akhir=bayar-jum_bayar;
             cout<< "Kembali: " << akhir << endl;
             break;
            }

           case '3':
           cout<<"Kota Tujuan Anda: Semarang\n"<<endl;
           printf("\n================== Pilih Kelas Bis ======================\n");
           cout<<"\nMasukan Kode Kelas Bis [ E / X ]  : ";
           cin>>kelas;
           cout<<endl;
           if (kelas=='E')
            {
             harga_tiket=480000;
             ppn=52000;
             jum_bayar=harga_tiket+ppn;
             cout<<"Harga Tiket + PPN = Rp."<<jum_bayar<<endl;
             cout<<"Jumlah Bayar = "<<endl;
             cin>>bayar;

             akhir=bayar-jum_bayar;
             cout<< "Kembali: " << akhir << endl;
             break;
            }
            else if (kelas=='X')
            {
             harga_tiket=570000;
             ppn=56000;
             jum_bayar=harga_tiket+ppn;
             cout<<"Harga Tiket + PPN = Rp."<<jum_bayar<<endl;
             cout<<"Jumlah Bayar = "<<endl;
             cin>>bayar;

             akhir=bayar-jum_bayar;
             cout<< "Kembali: " << akhir << endl;
             break;
            }
            break;
           default:
            cout << "Anda Salah Memasukan Kode" <<endl;

    }
}
