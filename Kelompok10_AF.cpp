#include <iostream>
using namespace std;

string murid(string nama, string kelas, string jenis_kelamin){//fungsi dengan parameter
    return(nama+" adalah murid "+kelas+ " Berjenis Kelamin "+jenis_kelamin);
}
int main (){
    string nama , kelas , jenis_kelamin;
    cout<<"Masukan nama murid"<<endl;
    cout<<"Nama         : " ; getline(cin , nama);//getline untuk memasukan nama lebih dari 1 kata
    cout<<"Kelas        : " ; getline(cin , kelas);
    cout<<"Jenis Kelamin: " ; getline(cin , jenis_kelamin);

    cout<<murid(nama,kelas,jenis_kelamin);

}
