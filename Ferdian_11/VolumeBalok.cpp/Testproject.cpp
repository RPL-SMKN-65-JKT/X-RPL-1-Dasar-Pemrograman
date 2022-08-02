#include <iostream>
#include <string>
using namespace std;

int main() {
    int p,l,t,v;
    string dimensi;


//input nilai panjang,lebar dan tinggi
  cout<<"Masukan Panjang : ";
  cin>>p;
  cout<<"Masukan Lebar : ";
  cin>>l;
  cout<<"Masukan Tinggi : ";
  cin>>t;
  cout<<"Masukan Dimensi Satuan Balok : ";
  cin>>dimensi;
  cout<<endl;

  v=p*l*t; //volume balok


  cout<<"Volume Balok = "<<v<<" "<<dimensi<<"3"; //tampilan hasil
  return 0;
}
