#include <iostream>

using namespace std;

int main()
{

    int N;
    int X;
    int i;
    int sum;
    float av;

    cin>>N;
    sum=0;
    i=1;
    while (i <= N){
        cout<<"Masukan Angka: "<<endl;
        cin>>X;
        i++;
        sum=sum+X;

    } av=sum/N;
    cout<<"Hasil Dari Rata Rata: "<<av<<endl;
}
