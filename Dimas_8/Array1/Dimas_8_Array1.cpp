#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"berapa index yang ingin diinput?: ";
    cin>>a;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    int numay[a];

    for(int i=0; i<a; i++)
    {
        cout<<"index ke "<<i<<":";
        cin>>numay[i];
    }
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"Nilai Index Yang Tersimpan"<<endl;
    for(int b=0;b<a;b++)
    {
        cout<<"Index "<<b<<"="<<numay[b]<<endl;
    }

return 0;
}
