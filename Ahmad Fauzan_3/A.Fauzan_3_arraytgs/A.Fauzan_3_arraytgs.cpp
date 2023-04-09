#include <iostream>
#include <iomanip> //untuk mengaktifkan fungsi setprecision //ternyata selama 30mnt eror nya lupa nambahin ini:)
#include <conio.h>
using namespace std;


int main(){

    int a;
    cout<<"Input berapa angka : "; cin>>a;

    double arrr[a];
    double sum=0;
    for(int i = 0; i < a; i++){
        cout<<"Masukkan angka "<<i+1<<" : ";
        cin>>arrr[i];

        sum+=arrr[i];

    }
    cout<<endl;

    for(int i=0; i<a; i++){
        cout<<"Angka "<<i+1<<" : "<<arrr[i]<<endl;
    }

    cout<<endl<<fixed<<setprecision(2)<<"Rata rata = "<< sum / a << endl;
    //setprecision itu untuk mengeluarkan berapa angka yang kita mau
    //disini ada setprecision(2)<<fixed yang artinya hanya mengeluarkan angka desimal maksimal 2
    return 0;
}
