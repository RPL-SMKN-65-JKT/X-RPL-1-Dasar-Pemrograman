#include <iostream>
using namespace std;

int main() {
        //Jasa Pijat//
        int orang,i=1,sum=0,per=20000;
        string Nama;
        float durasi,jam=1000,j=0,total;

        cout<<"\t********JAPIAN********"<<endl;
        cout<<"\t*****Jasa Pijat Anime*****"<<endl;
        cout<<"========================================"<<endl;
        cout<<endl;
        cout<<"\t Jumlah orang: ";
        cin>> orang;

        for (int i=1;i<=orang;i++) {
            cout<<"-> Orang ke:"<<i<<".";
            cin>> Nama;
            cout<<"   Durasi berapa jam: ";
            cin>> durasi;
            sum=orang*per;
            j=j+durasi;
        }
        cout<<endl;
        cout<<"     INVOICE JAPIAN       "<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
        cout<<"     Total durasi: "<<j<<""<<endl;
        j=j*jam;
        total=sum+j;
        cout<<"     Total harga :Rp. "<<total<<""<<endl;
        cout<<"\t      ARIGATOU <3";

        return 0;
}
