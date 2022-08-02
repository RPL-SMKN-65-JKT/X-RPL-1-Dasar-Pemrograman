#include <iostream>
using namespace std;

int main(){
    int panjang, lebar, tinggi, hasil;

    cout<<"Masukan Nilai Panjang : ";
    cin>>panjang;
    cout<<"Masukan Nilai Lebar : ";
    cin>>lebar;
    cout<<"Masukan Nilai Tinggi : ";
    cin>>tinggi;

    hasil=panjang*lebar*tinggi;
    cout<<"\nMaka, Volume Balok Adalah "<<hasil;
    return 0;
}
