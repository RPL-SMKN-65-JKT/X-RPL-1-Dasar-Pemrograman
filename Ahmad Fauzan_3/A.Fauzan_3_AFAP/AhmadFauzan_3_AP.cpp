#include <iostream>
using namespace std;

void siswa(string nama,string kelas){
  cout<< nama << " adalah siswa kelas " << kelas; //sedikit berbeda dengan fungsi karena tidak mengembalikan nilai,jadi langsung menampilkan di fungsinya
} //prosedur tidak mengembalikan nilai ke nama fungsi,jadi memakai void

int main(){
  string nama,kelas;
  cout<< "nama  : "; getline(cin,nama);
//getline hampir sama seperti cin supaya bisa memasukkan nama/data lebih dari 1 kata
  cout<< "kelas : "; getline(cin,kelas);

  siswa(nama,kelas); //kemudian memanggil disini
}
//MAAF YAA BUUU TELATT TADII SORE LATIHAN UNTUK TURNAMENN THANKSS BUU:)
