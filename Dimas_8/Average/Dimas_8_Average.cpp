#include <iostream>

using namespace std;

int main()
{
    int n,x,i;
    int sum;
    float av;

    cout<<"masukan jumlah pengulangan"<<endl;
    cin>>n;
    sum=0;
    i=1;
    while(i<=n){
        cout<<"masukan angka"<<endl;
        cin>>x;
        i++;
        sum=sum+x;
    }
    av=sum/n;
    cout<<"rata rata adalah = "<<av<<endl;
    return 0;
}



