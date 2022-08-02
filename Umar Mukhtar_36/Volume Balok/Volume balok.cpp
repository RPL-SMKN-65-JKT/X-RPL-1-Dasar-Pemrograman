
#include <iostream>]
#include <string>
using namespace std;
int main(){
    int p,l,t,v ;
    string dimensi;

//proses
    cout<<"MENGHITUNG VOLUME BALOK"<<endl;
    cout<<"-----------------------"<<endl;
//input nilai panjang,lebar,dan tinggi
    cout<<"Masukan panjang : ";
    cin>>p;
    cout<<"Masukan lebar : ";
    cin>>l;
    cout<<"Maukan tinggi : ";
    cin>>t;
    cout<<"Masukan Dimensi Satuan Balok : ";
    cin>>dimensi;
    cout<<endl;

    v=p*l*t; //rumus menghitung volume balok

    cout<<"Volume Balok  = "<<v<<" "<<dimensi<<"3"; //tampilkan hasil
    return 0;
}
