#include <iostream>
using namespace std;
int main () {

    int N;
    int x;
    int i;
    int sum;
    float av;
    cout<<"masukan N"<<endl;
    cin>>N;
    sum=0;
    i=1;
    while (i<=N) {
    cout<<"masukan angka"<<endl;
    cin>>x;
    i++;
    sum=sum+x;

    }
    av=sum/N;
    cout<<"rata-ratanya adalah="<<av<<endl;

    return 0;
}








