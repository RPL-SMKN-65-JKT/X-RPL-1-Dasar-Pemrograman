#include <iostream>
using namespace std;
int main()
{
  int menu;
  int banyak,total;
  cout<<"Menu Kantin Kampuscpp"<<endl;
  cout<<"1.Ayam Geprek + Nasi + Es Susu Milo (Rp.15000)"<<endl;
  cout<<"2.Ayam Penyet + Nasi + Es Teh (Rp.13000)"<<endl;
  cout<<"3.Ayam Crispy + Nasi + Pepsi Dingin (Rp.14000)"<<endl;
  cout<<"4.Ayam Bakar + Nasi Uduk + Es Teh (Rp. 16000)"<<endl;
  cout<<"Masukkan menu yang dipilih : ";
  cin>>menu;
  if(menu == 1){ 
    cout<<"Masukkan jumlah : ";
    cin>>banyak;
    total = banyak*15000;
    cout<<"Total Paket 1 : "<<total;
    }
  else if(menu == 2){
    cout<<"Masukkan jumlah : ";
    cin>>banyak;
    total = banyak*13000;
    cout<<"Total Paket 2 : "<<total;
    }
  else if(menu == 3){
    cout<<"Masukkan jumlah : ";
    cin>>banyak;
    total = banyak*14000;
    cout<<"Total Paket 3 : "<<total;     
    }   
  else if(menu == 4){
    cout<<"Masukkan jumlah : ";
    cin>>banyak;
    total = banyak*16000;
    cout<<"Total Paket 4 : "<<total; 
    }               
  else{
    cout<<"Maaf, menu tidak tersedia";          
    }
   
  return 0;                   
  }