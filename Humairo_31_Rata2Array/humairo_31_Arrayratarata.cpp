#include <iostream>

using namespace std;

int main (){

    int C[20],j;
    int jumlah_elemen;
    int sum=0;
    float average;

    cout <<"massukan banyaknya elemen array" <<":";
    cin >> jumlah_elemen;

    for ( j = 0 ;j < jumlah_elemen; j++){
        cout <<"elemen ke-"<< j+0 <<" = ";
        cin >>C[j];
        sum=sum+C[j];
    }
    average=sum/jumlah_elemen;
    cout << "totalnya adalah:" <<sum<<endl;
    cout << "rata-rata:" <<average<<endl;
}
