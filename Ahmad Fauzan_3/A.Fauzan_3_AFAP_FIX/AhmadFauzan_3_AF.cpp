#include <iostream>
using namespace std;

string siswa(string nama,string kelas){
  return (nama+" adalah siswa kelas "+kelas); //seperti ini karena tidak memakai cout
} //Fungsi mengembalikan nilai ke string

int main(){
  string nama,kelas;
  cout<< "nama  : "; getline(cin,nama); //getline hampir sama seperti cin supaya bisa memasukkan nama/data lebih dari 1 kata
  cout<< "kelas : "; getline(cin,kelas);

  cout<< siswa(nama,kelas); //kemudian di panggil disini
}
//MAAF YAA BUUU TELATT TADII SORE LATIHAN UNTUK TURNAMENN THANKSS BUU:)
