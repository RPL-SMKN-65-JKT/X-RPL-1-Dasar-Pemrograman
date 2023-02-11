#include<iostream>
using namespace std;

int main ()
{
    int i, sum, orang, harga=20000;
    string nama;
    float jam, jamA=5000, jamB=0, total;

    cout <<"Pijet Plus Plus"<<endl;
    cout <<"Rp. 20.000/orang"<<endl;
    cout <<"Rp.  5.000/jam"<<endl;
    cout <<"++++++++++++++++"<<endl;
    cout <<"Berapa orang: ";
    cin >> orang;
    cout <<"++++++++++++++++"<<endl;
    sum=0;
    i=1;

    for(i=1;i<=orang;i++){
        cout <<"nama orang ke "<<i<<": ";
        cin >> nama;
        cout <<"berapa jam: ";
        cin >> jam;
        sum=orang*harga;
        jamB=jamB+jam;
    }
    cout <<"++++++++++++++++"<<endl;
    cout <<"jumlah orang yang pijat: "<<orang<<" orang"<<endl;
    cout <<"durasi pijat: "<<jamB<<" jam"<<endl;
    jamB=jamB*jamA;
    total=sum+jamB;
    cout <<"total yang dibayar Rp."<<total<<endl;

    return 0;
}
