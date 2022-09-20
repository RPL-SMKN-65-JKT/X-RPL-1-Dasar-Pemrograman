 
#include <iostream>
using namespace std;

//Variabel
int menu_kopi, menu_ukuran;
int harga_kopi, harga_ukuran, jumlah, harga_total;
string ket_kopi, ket_ukuran;

//main program
int main(int argc, char *argv[])
{
  //intro
  cout << "=====================" << endl;
  cout << "= Kedai Kopi-Kopian =" << endl;
  cout << "=====================" << endl;
  
  //membuat menu kopi
  cout << "Menu Kopi Tersedia: " << endl;
  cout << "[1] Ekspresso" << endl;
  cout << "[2] Capuccino" << endl;
  cout << "[3] Arabica" << endl;
  cout << "[4] Moccacino" << endl;
  cout << "Masukkan Pilihan anda: ";
  cin >> menu_kopi;
  
  //mengkondisikan menu kopi
  if(menu_kopi==1){
    harga_kopi=5;
    ket_kopi="Ekspresso";
  }else if(menu_kopi==2){
    harga_kopi=6;
    ket_kopi="Capuccino";
  }else if(menu_kopi==3){
    harga_kopi=7;
    ket_kopi="Arabica";
  }else if(menu_kopi==4){
    harga_kopi=8;
    ket_kopi="Moccacino";
  }else{
    //jika menu tidak ada
    cout << "Menu tidak ada!";
    exit(0);
  }
  
  //membuat menu ukuran
  cout << "Menu Ukuran Tersedia: " << endl;
  cout << "[1] Small/Kecil" << endl;
  cout << "[2] Medium/Sedang" << endl;
  cout << "[3] Large/Besar" << endl;
  cout << "[4] XL/Super Besar" << endl;
  cout << "Masukkan Pilihan anda: ";
  cin >> menu_ukuran;
  
  //mengkondisikan menu ukuran
  if(menu_ukuran==1){
    harga_ukuran=3;
    ket_ukuran="S";
  }else if(menu_ukuran==2){
    harga_ukuran=4;
    ket_ukuran="M";
  }else if(menu_ukuran==3){
    harga_ukuran=5;
    ket_ukuran="L";
  }else if(menu_ukuran==4){
    harga_ukuran=6;
    ket_ukuran="XL";
  }else{
    //jika menu tidak ada
    cout << "Menu tidak ada!";
    exit(0);
  }
  
  //jumlah cup/gelas
  cout << "Berapa cup/gelas?: ";
  cin >> jumlah;

  //mengkondisikan jumlah
  if(jumlah==0 or isdigit(jumlah)){
  //jika jumlah tidak ada
    cout << "Jumlah tidak ada!";
    exit(0);
  }
  
  //total harga
  //rumus
  harga_total=(harga_kopi+harga_ukuran)*jumlah;
  //clearscreen
  system("clear");
  //struk
    cout << "=====================" << endl;
  cout << "Pesanan anda: " << endl;
  cout << "Kopi: " << ket_kopi << "\t" << harga_kopi << "K" << endl;
  cout << "Ukuran: " << ket_ukuran << "\t" << harga_ukuran << "K" << endl;
  cout << "Jumlah: \t" << jumlah << " Cup" << endl;
  cout << "Total Harga: \t" << harga_total << "K" << endl;
    cout << "=====================" << endl;
  
}

      
      

