#include <iostream>//membuka fitur c++ cout,dll.
using namespace std;//menyajikan perintah/deklarasi ke sebuah aplikasi

int main ()// fungsi utama program
{
    int nilai[5]={70,72,71,82,90};//inisialisasi/typedata,array,index berisi velue
    int i;//inisialisasi/typedata
    for (i=0;i<5;i++){//inisialisasi,kondisi/increment
        cout <<"Cetak Nilai ke-"<<i+1<<" = "<<nilai[i]<<endl;//statement
    }
    return 0 ;//memberitahu bahwa kode telah selesai di esekusi dengan exit code 0

}
