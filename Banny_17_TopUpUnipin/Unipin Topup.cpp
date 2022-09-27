//program TOP UP GAME ONLINE
#include<iostream>
using namespace std;
char lagi;
char y;
int pilihan,jtopup,pilih;
string idplay;

int main(){
    menu_utama:
        system ("cls");
            cout<< "=========================\n";
            cout<< "|      UNIPIN TOPUP     |\n";
            cout<< "=========================\n";
            cout<< "|     1.Free Fire       |\n";
            cout<< "|     2.Mobile Legend   |\n";
            cout<< "|     3.PUBG Mobile     |\n";
            cout<< "|     4.keluar          |\n";
            cout<< "=========================\n";
 ulangi:
     cout<< "masukkan pilihan anda (1-4): ";
     cin>>pilihan;

     switch(pilihan){
         case 1:
         cout<<"Game Free Fire"<<endl;
         cout<< "Masukkan ID Player anda!"<<endl;
         cout<< "ID Player: "<<endl;
         cin>>idplay;
    cout<< "================================\n";
    cout<<"Masukkan jumlah Topup anda (!-4)!"<<endl;
    cout<<"1. Rp.50.000 =  350 diamond!"<<endl;
    cout<<"2. Rp.100.000 = 720 diamond!"<<endl;
    cout<<"3. Rp.200.000 = 1.450 diamond!"<<endl;
    cout<<"4. Rp.300.000 = 2.180 diamond!"<<endl;
    cout<< "================================\n";
    cout<<"Masukkan jumlah Topup anda:";
    cin>>jtopup;
    if (jtopup==1)
    {
            cout<< "selamat anda telah berhasil topup"<<endl;
            cout<<"Dengan akun  :"<<idplay<<endl;
            cout<<"jumlah topup :"<<"Rp.50.000 = 350 diamond"<<endl;
            cout<<"\n\n";
            cout<< "masih lanjut [y/t]? ";
            cin>>lagi;
            if (lagi == y)
            goto menu_utama;
            else goto keluar;
    }
                if (jtopup==2)
    {
            cout<< "selamat anda telah berhasil topup"<<endl;
            cout<<"Dengan akun  :"<<idplay<<endl;
            cout<<"jumlah topup :"<<"Rp.100.000 = 720 diamond"<<endl;
            cout<<"\n\n";
            cout<< "masih lanjut [y/t]? ";
            cin>>lagi;
            if (lagi == y)
            goto menu_utama;
            else goto keluar;
    }
                if (jtopup==3)
    {
            cout<< "selamat anda telah berhasil topup"<<endl;
            cout<<"Dengan akun  :"<<idplay<<endl;
            cout<<"jumlah topup :"<<"Rp.200.000 = 1.450 diamond"<<endl;
            cout<<"\n\n";
            cout<< "masih lanjut [y/t]? ";
            cin>>lagi;
            if (lagi == y)
            goto menu_utama;
            else goto keluar;
    }
                if (jtopup==4)
    {
            cout<< "selamat anda telah berhasil topup"<<endl;
            cout<<"Dengan akun  :"<<idplay<<endl;
            cout<<"jumlah topup :"<<"Rp.300.000 = 2.180 diamond"<<endl;
            cout<<"\n\n";
            cout<< "masih lanjut [y/t]? ";
            cin>>lagi;
            if (lagi == y)
            goto menu_utama;
            else goto keluar;
    }
        else
        {
            cout<< "maaf input yang anda masukkan salah, silakan coba lagi \n\n"<<endl;
    goto menu_utama;
        }



  break;
  case 2:
   cout<<"Game Mobile Legend"<<endl;
         cout<< "Masukkan ID Player anda!"<<endl;
         cout<< "ID Player: "<<endl;
         cin>>idplay;
    cout<< "================================\n";
    cout<<"Masukkan jumlah Topup anda (!-4)!"<<endl;
    cout<<"1. Rp.50.000 =  500 diamond!"<<endl;
    cout<<"2. Rp.100.000 = 1.000 diamond!"<<endl;
    cout<<"3. Rp.150.000 = 1.500 diamond!"<<endl;
    cout<<"4. Rp.250.000 = 3.000 diamond!"<<endl;
    cout<< "================================\n";
    cout<<"Masukkan jumlah Topup anda:";
    cin>>jtopup;
    if (jtopup==1)
     {
            cout<< "selamat anda telah berhasil topup"<<endl;
            cout<<"Dengan akun  :"<<idplay<<endl;
            cout<<"jumlah topup :"<<"Rp.50.000 = 500 diamond"<<endl;
            cout<<"\n\n";
            cout<< "masih lanjut [y/t]? ";
            cin>>lagi;

            if (lagi == y)
            goto menu_utama;
            else goto keluar;
    }
                if (jtopup==2)
    {
            cout<< "selamat anda telah berhasil topup"<<endl;
            cout<<"Dengan akun  :"<<idplay<<endl;
            cout<<"jumlah topup :"<<"Rp.100.000 = 1.000 diamond"<<endl;
            cout<<"\n\n";
            cout<< "masih lanjut [y/t]? ";
            cin>>lagi;
            if (lagi == y)
            goto menu_utama;
            else goto keluar;
    }
                if (jtopup==3)
    {
            cout<< "selamat anda telah berhasil topup"<<endl;
            cout<<"Dengan akun  :"<<idplay<<endl;
            cout<<"jumlah topup :"<<"Rp.150.000 = 1.500 diamond"<<endl;
            cout<<"\n\n";
            cout<< "masih lanjut [y/t]? ";
            cin>>lagi;
            if (lagi == y)
            goto menu_utama;
            else goto keluar;
    }
                if (jtopup==4)
    {
            cout<< "selamat anda telah berhasil topup"<<endl;
            cout<<"Dengan akun  :"<<idplay<<endl;
            cout<<"jumlah topup :"<<"Rp.250.000 = 3.000 diamond"<<endl;
            cout<<"\n\n";
            cout<< "masih lanjut [y/t]? ";
            cin>>lagi;
            if (lagi == y)
            goto menu_utama;
            else goto keluar;
    }
        else
        {
            cout<< "maaf input yang anda masukkan salah, silakan coba lagi \n\n"<<endl;
    goto menu_utama;
        }



  break;
  case 3:
    cout<<"Game PUBG Mobile"<<endl;
         cout<< "Masukkan ID Player anda!"<<endl;
         cout<< "ID Player: "<<endl;
         cin>>idplay;
    cout<< "================================\n";
    cout<<"Masukkan jumlah Topup anda (!-4)!"<<endl;
    cout<<"1. Rp.50.000 =  500 UC!"<<endl;
    cout<<"2. Rp.100.000 = 1.000 UC!"<<endl;
    cout<<"3. Rp.150.000 = 1.500 UC!"<<endl;
    cout<<"4. Rp.250.000 = 3.000 UC!"<<endl;
    cout<< "================================\n";
    cout<<"Masukkan jumlah Topup anda:";
    cin>>jtopup;
    if (jtopup==1)
     {
            cout<< "selamat anda telah berhasil topup"<<endl;
            cout<<"Dengan akun  :"<<idplay<<endl;
            cout<<"jumlah topup :"<<"Rp.50.000 = 500 UC"<<endl;
            cout<<"\n\n";
            cout<< "masih lanjut [y/t]? ";
            cin>>lagi;
            if (lagi == y)
            goto menu_utama;
            else goto keluar;
    }
                if (jtopup==2)
    {
            cout<< "selamat anda telah berhasil topup"<<endl;
            cout<<"Dengan akun  :"<<idplay<<endl;
            cout<<"jumlah topup :"<<"Rp.100.000 = 1.000 UC"<<endl;
            cout<<"\n\n";
            cout<< "masih lanjut [y/t]? ";
            cin>>lagi;
            if (lagi == y)
            goto menu_utama;
            else goto keluar;
    }
                if (jtopup==3)
    {
            cout<< "selamat anda telah berhasil topup"<<endl;
            cout<<"Dengan akun  :"<<idplay<<endl;
            cout<<"jumlah topup :"<<"Rp.150.000 = 1.500 UC"<<endl;
            cout<<"\n\n";
            cout<< "masih lanjut [y/t]? ";
            cin>>lagi;
            if (lagi == y)
            goto menu_utama;
            else goto keluar;
    }
                if (jtopup==4)
    {
            cout<< "selamat anda telah berhasil topup"<<endl;
            cout<<"Dengan akun  :"<<idplay<<endl;
            cout<<"jumlah topup :"<<"Rp.250.000 = 3.000 UC"<<endl;
            cout<<"\n\n";
            cout<< "masih lanjut [y/t]? ";
            cin>>lagi;
            if (lagi == y)
            goto menu_utama;
            else goto keluar;
    }
    case 4:
  goto keluar;
  default:

     keluar:
            cout<< "\n TOPUP UNIPIN BERHASIL";
            cout<< "\n terima kasih.";
            return 0;
}
}
