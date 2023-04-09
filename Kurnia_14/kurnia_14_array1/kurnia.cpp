#include <iostream>
#include <conio.h>
using namespace std;
int main()
  {
    int i, n, data[65];
    float rata,jum;

    cout<<"Banyaknya Data = ";
    cin>>n;
    cout<<endl;

    for (i=0; i<n; i++)
        {
           cout<<"Data ke-"<<i+1<<" = ";
           cin>>data[i];
           jum += data[i];
        }

    rata=jum/n;

    cout<<endl;
    cout<<"Nilai Total = "<<jum<<endl;
    cout<<"Nilai Rata-rata = "<<rata<<endl;
  getch();
  }
