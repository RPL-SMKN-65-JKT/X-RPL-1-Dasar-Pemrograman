#include <iostream>
using namespace std;
int main()
{
    int a,b;

    cout<< "Masukan bilangan pertama:\n";
    cin>>a;
    cout<< "Masukan bilangan kedua:\n";
    cin>>b;

    if (a>b){
     cout<< "Bilangan terbesar:" <<a<<endl;
    }
    else {
     cout<<"Bilangan terbesar:"<<b<<endl;
    }
    return 0;
}
