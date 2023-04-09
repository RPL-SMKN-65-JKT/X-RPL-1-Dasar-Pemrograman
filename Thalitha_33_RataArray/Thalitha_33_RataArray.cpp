#include<iostream>
using namespace std;
int f[8];
int j,t,r;

int main(){
    for(int i=1; i <= 8; i++){
        cout << "Masukkan Data Array ke-"<<i<<":";
        cin  >> f[i];
        t=t+f[i];
    }
    j=sizeof(f)/sizeof(f[0]);
    r=t/j;
    cout << "Jumlah Elemen Array = " << j <<endl;
    cout << "Total Array = " << t <<endl;
    cout << "Rata-Rata = " << r <<endl;
}
