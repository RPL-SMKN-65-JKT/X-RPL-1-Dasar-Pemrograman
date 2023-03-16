#include <iostream>

using namespace std;

int main (){
    //Deklarasi array
    int A[10]= {5, 12, 24, 53, 51, 26, 17, 62, 36, 68};
    int cari;

    //Menampilkan elemen data
    for (int i=0; i<10; i++){
        cout<<"Data bari ke-"<<i<<" = "<<A[i];cout<<endl;
    }

    //Memasukkan data yang akan dicari
    cout<<"Masukkan data yang dicari : ";cin>>cari;



    //Melakukan pencarian data
    for (int j=0; j<10; j++){
        if (A[j] == cari){
        cout<<"Nilai yang dicari berada pada indeks ke-"<<j<<endl;
        }else{
        cout<<"Data yang dicari tidak ditemukan"<<endl;
        }
    }
    return 0;
}
