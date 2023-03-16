#include <iostream>//membuka fitur c++ cout,dll.
using namespace std;//menyajikan perintah/deklarasi ke sebuah aplikasi

int main()// fungsi utama program
{
    cout<<"==========================================================="<<endl;
    cout<<"ARYA PANCA PUTRA X RPL 1"<<endl;
    cout<<"KJR 3"<<endl;
    cout<<"==========================================================="<<endl;
    system ("Color E4");
    int jml;//inisialisasi/typedata
    int arr[] = {1971, 1974, 2000, 2003, 2006};//inisialisasi/typedata,array,index berisi velue
    jml = sizeof(arr)/sizeof(*arr);

    for(int i=0; i<jml; i++){//inisialisasi,kondisi/increment
        cout<<"Tahun lahir di KK urutan ke "<< i <<" = "<<arr[i]<<endl;//statement
    }
    return 0;//memberitahu bahwa kode telah selesai di esekusi dengan exit code 0

}


