#include <iostream>

using namespace std;

int main () {                                                          //funsi utama
    system("color 79");                                                //mengeluarkan suatu komponen
    int N;                                                             //deklarasi
    int x;
    int i;
    int sum;
    float avere;                                                       //float untuk menampilkan bilangan pecahan
    cout<< "masukan angka berapa element = "<<endl;                    //cout untuk output
    cin >>N;                                                           //cin untuk menginput
    sum=0;
    i=1;                                                               //inisialisasi
    while (i<N){                                                       //kondisi
            cout <<" masukan data ke- " <<i<<" = "<< endl;             //cout untuk output
            cin >>x;                                                   //cin untuk menginput
            i++;                                                       //increment
            sum=sum+x;                                                 //sum untuk menambahkan semua nilai

    }
    avere = sum/N;                                                     //avere untuk membagi semua nilai untuk mencari rata-rata
    cout << "Nilai rata-rata array nya adalah = "<< avere <<endl;      //cout untuk output
}
