#include<iostream>
using namespace std;
int main (){
    typedef struct {
        int hh;
        int mm;
        int ss;
    }jam;
    jam j;


    system("color a");
    cout<<"jam    =";
    cin >>j.hh;
    cout<<"menit  =";
    cin >>j.mm;
    cout<<"detik  =";
    cin >>j.ss;

    cout<<"==========================="<<endl;
     if (j.hh + 1)
        cout<<"sekarang jam "<<j.hh<<endl;
     else
        cout<<"sekarang jam "<<j.hh<<endl;

     if (j.mm + 1)
        cout<<"sekarang menit "<<j.mm<<endl;
     else
        cout<<"sekarang menit "<<j.mm<<endl;

     if (j.ss + 1)
        cout<<"sekarang detik "<<j.ss<<endl;
     else
        cout<<"sekarang detik  "<<j.ss<<endl;
    cout<<"============================"<<endl;


    int hasil;
    int jumlah;
    int tambah;

        hasil =j.hh + 1;
        jumlah =j.mm +1;
        tambah =j.ss +1;

    cout<<"jam sekarang:"<<hasil<<endl;
    cout<<"menit sekarang:"<<jumlah<<endl;
    cout<<"detik sekarang:"<<tambah<<endl;
    cout<<"============================"<<endl;
    cout<<hasil<<":"<<jumlah<<":"<<tambah<<endl;


    return 0;
}

