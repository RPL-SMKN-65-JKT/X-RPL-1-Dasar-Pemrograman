#include <iostream>

using namespace std;

int main()

{
    int a;
    int sum=0;
    cout<<"berapa index yang ingin diinput?: ";
    cin>>a;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    int ar[a];

    for(int i=0; i<a; i++)
    {
        cout<<"index ke "<<i+1<<":";
        cin>>ar[i];
        sum=sum+ar[i];
    }
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"Nilai Index Yang Tersimpan"<<endl;
    for(int b=0;b<a;b++)
    {
        cout<<"Index "<<b+1<<"="<<ar[b]<<endl;
    }

    cout<<"rata rata array="<<sum/a;
    return 0;
}



