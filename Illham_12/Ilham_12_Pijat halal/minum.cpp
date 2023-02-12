#include <iostream>
using namespace std;

int main()
{
int jumlah;
int durasi;
int harga_jam=1000;
int harga_per=20000;
int total_orang1,total_orang2,total_orang3;
int total;
char tanya;
do{
    system("color 04");
    cout <<" Jasa pijet kretek"<< endl;
    cout <<"Harga perorang=20000" << endl;
    cout <<"masukkan jumlah orang maksimal 3 orang:" <<endl;
    cin  >>jumlah;

if (jumlah==1){
    cout <<"Asep" << endl;
    cout <<"berapa lama durasinya" << endl;
    cin  >> durasi;
    total_orang1=durasi*harga_jam+harga_per;
    cout <<"Total semuanya menjadi " << total_orang1 << endl;
    cout <<"Apakah kamu ingin mengulang? [y/t]" << endl;
    cin  >> tanya;
            }
if (jumlah==2) {
    cout <<"Asep" << endl;
    cout <<"berapa lama durasinya" << endl;
    cin  >> durasi;
    total_orang1=durasi*harga_jam+harga_per;
    cout <<"Total orang 1: " << total_orang1 << endl;


    cout <<"Bambang" << endl;
    cout <<"berapa lama durasinya" << endl;
    cin  >> durasi;
    total_orang2=durasi*harga_jam+harga_per;
    cout <<"total orang 2: " << total_orang2 << endl;
    cout <<"total semuanya menjadi: " << total_orang1+total_orang2 << endl;
    cout <<"Apakah kamu ingin mengulang? [y/t]" << endl;
    cin  >> tanya;
               }
if (jumlah==3) {
    cout <<"Asep" << endl;
    cout <<"berapa lama durasinya" << endl;
    cin  >> durasi;
    total_orang1=durasi*harga_jam+harga_per;
    cout <<"Total orang 1: " << total_orang1 << endl;


    cout <<"Bambang" << endl;
    cout <<"berapa lama durasinya" << endl;
    cin  >> durasi;
    total_orang2=durasi*harga_jam+harga_per;
    cout <<"total orang 2: " << total_orang2 << endl;

    cout <<"udin" << endl;
    cout <<"berapa lama durasinya" << endl;
    cin  >> durasi;
    total_orang3=durasi*harga_jam+harga_per;
    cout <<"Total orang 3: " << total_orang3 << endl;
    cout <<"total semuanya menjadi: " << total_orang1+total_orang2+total_orang3 << endl;
    cout <<"Apakah kamu ingin mengulang? [y/t]" << endl;
    cin  >> tanya;
                }
else if(jumlah >3){
    cout <<"jumlah melebihi kapasitas" << endl;
    cout <<"Apakah kamu ingin mengulang? [y/t]" << endl;
    cin  >> tanya;
}

}while(tanya!='t');
 return 0;
}



