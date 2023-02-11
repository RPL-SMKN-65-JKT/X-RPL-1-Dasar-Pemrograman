#include <iostream>

using namespace std;

int main()
{
  int orang;
  int harga=20000;
  string nama;
  float durasi;
  float durasik=1000;
  float durasim=0;
  int i;
  int sum;
  float jumlah;

  cout<<"===============Selamat Datang==============="<<endl;
  cout<<"===========Jasa Pijat Minus Minus==========="<<endl;
  cout<<"Harga Perorang Rp20000 + Harga Perjam Rp1000"<<endl;
  cout<<"============================================"<<endl;
  cout<<"Berapa orang yang ingin dipijat? : ";
  cin>>orang;
  sum=0;
  i=1;

  for(int i=1;i<=orang;i++){
        cout<<"============================================"<<endl;
        cout<<"masukan Nama Orang "<<i<<" : "<<endl;
        cin>>nama;
        cout<<"Berapa Jam? : "<<endl;
        cin>>durasi;
        sum=orang*harga;
        durasim=durasim+durasi;


  }
  durasim=durasim*durasik;
  jumlah=sum+durasim;
  cout<<"============================================"<<endl;
  cout<<"Jumlah yang harus dibayar : Rp"<<jumlah<<endl;


    return 0;
}


