#include <iostream>
using namespace std;

int main(){

    int N;
    int X;
    int i;
    int sum;
    float av;

    cout<<"masukkan jumlah pengulangan"<<endl;
    cin>>N;
    sum=0;
    i=1;
    while(i<=N){
        cout<<"masukkan angka"<<endl;
        cin>>X;
        i++;
        sum=sum+X;
    }av=sum/N;
    cout<<"Rata rata nya adalah = "<<av<<endl;
}
