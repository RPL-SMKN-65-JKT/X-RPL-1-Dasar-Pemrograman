#include <iostream>
using namespace std;

int main(){

    int jumlah;
    string orang1,orang2,orang3;
    int durasi1,durasi2,durasi3;
    int perorangan=20000;
    int harga_jam=10000;
    int total;
    char albanny;

        cout<<"==========WELCOME=========="<<endl;
        cout<<"=====JASA PIJET ALBANNY===="<<endl;
        cout<<"Harga Perorangan 20K + Harga Perjam 10K"<<endl;
        cout<<""<< endl;
        cout<<"Masukkan Jumlah Orang: ";
        cin>>jumlah;

        switch(jumlah){
        case 1:
             cout<<"Orang 1: "<<endl;
             cin>>orang1;
             cout<<"Okay"<< orang1 <<"Mau Berapa Lama Durasi Jamnya...?"<<endl;
             cin>>durasi1;
             durasi1=durasi1*harga_jam;
             cout<<"semuanya jadi"<<durasi1<<endl;
             cout<<"Saya Mulai :";
             cin>>albanny;
             cout<<"=============================================";

             break;
        case 2:
             cout<<"orang 1: "<<endl;
             cin>>orang1;
             cout<<"orang 2: "<<endl;
             cin>>orang2;
             cout<<"Okay"<< orang1 <<"Mau Berapa Lama Durasi Jamnya...?"<<endl;
             cin>>durasi1;
             cout<<"Okay"<< orang2 <<"Mau Beraoa Lama Durasi Jamnya...?"<<endl;
              cin>>durasi2;
             durasi2=durasi2*harga_jam;
             durasi3=durasi3*harga_jam;
             cout<<"semuanya jadi"<<durasi1<<endl;
             cout<<"semuanya jadi"<<durasi2<<endl;
             cin>>albanny;
             break;
             cout<<"=============================================";
        default:
            cout<<"TeriaKasih Dan Jangan Kapok Untuk Balik Lagi"<<endl;
        }

return 0;
   }
