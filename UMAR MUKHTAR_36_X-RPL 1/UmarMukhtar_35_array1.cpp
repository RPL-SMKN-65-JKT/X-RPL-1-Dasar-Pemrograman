#include <iostream>

using namespace std;

int main(){ //fungsi utama dari suatu program
    int jml_arr; //inisialisasi
    string nama[] = { "Budi","Asep","Koh Aheng","Sakmadik","Marimas","Jokowi","Megawati" }; //array string berisikan nama-nama
    jml_arr = sizeof(nama)/sizeof(*nama);

    for(int a=0; a< jml_arr; a++){ //inisialisasi,kondisi,dan increment
        cout << nama[a]<<endl; // mengeluarkan hasil output text
      
    }
}
