#include <iostream>
using namespace std;

void murid(string nama, string kelas, string jenis_kelamin){//prosedur dengan parameter
  cout<<nama<<" adalah murid "<<kelas<<" berjenis kelamin "<<jenis_kelamin<<endl;
}
int main (){
    string nama , kelas, jenis_kelamin;
    cout<<"Masukan nama murid"<<endl;
    cout<<"Nama         : " ; getline(cin , nama);//getline untuk memasukan nama lebih dari 1 kata
    cout<<"Kelas        : " ; getline(cin , kelas);
    cout<<"Jenis kelamin: " ; getline(cin , jenis_kelamin);

    murid(nama, kelas, jenis_kelamin);
}
