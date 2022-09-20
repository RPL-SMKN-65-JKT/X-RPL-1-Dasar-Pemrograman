#include <iostream>
#include <string>

using namespace std;


int main ()
{
    int harga_tiket;
    char tujuan,B;

    system ("color A0");
    cout<<"\n--------(Selamat datang di stasiun Pasar Minggu Baru)--------\n"<<endl;
    cout<<"Nama Kereta  : Lin bogor"<<endl;
    cout<<"Tujuan Akhir : 1)Jakarta Kota 2)Bogor 3)Nambo\n"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~Info Kereta~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"<<endl;

    cout<<"1.Harga Tiket Kereta"<<endl;
    cout<<"Pilih (1-3) Untuk Info Tentang Harga Kereta lebih lanjut\n"<<endl;
    cin>>tujuan;
    cout<<"B.Jadwal Kereta"<<endl;
    cout<<"Pilih (B) Untuk Jadwal Kereta lebih lanjut\n"<<endl;
    cin>>B;
    cout<<endl;

    switch(tujuan)
    {
    case '1':
        {
            cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
            cout<<"Harga TIket Kereta: "<<endl;
            cout<<"Jakarta Kota :"<<endl;
            harga_tiket=5000;
            cout<<"Harga Tiket Kereta = Rp."<<harga_tiket<<endl;
            cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
        break;
        }
    case '2':
        {
            cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
            cout<<"Harga Tiket Kereta: "<<endl;
            cout<<"Bogor : "<<endl;
            harga_tiket=10000;
            cout<<"Harga Tiket Kereta = Rp."<<harga_tiket<<endl;
            cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
        break;
        }
    case '3':
        {
            cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
            cout<<"Harga Tiket Kereta: "<<endl;
            cout<<"Nambo : "<<endl;
            harga_tiket=4000;
            cout<<"Harga Tiket Kereta = Rp."<<harga_tiket<<endl;
            cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
        break;
        }
    }


    if (B)
    {
        cout<<endl;
        cout<<endl;
        cout<<"Jadwal Kereta jakarta kota: "<<endl;
        cout<<"======================================================================================="<<endl;
        cout<<" No.KRL	      Relasi	            Stasiun Persinggahan	    Tiba	    Berangkat";
        cout<<endl;
        cout<<" 1059	   Jakarta Kota	    Stasiun Pasar Minggu	  06:07:00	    06:08:00"<<endl;
        cout<<" 1071	   Jakarta Kota	    Stasiun Pasar Minggu	  07:02:00	    07:03:00"<<endl;
        cout<<" 1083	   Jakarta Kota	    Stasiun Pasar Minggu	  07:47:00	    07:48:00"<<endl;
        cout<<" 1089	   Jakarta Kota	    Stasiun Pasar Minggu	  08:08:00	    08:09:00"<<endl;
        cout<<" 1093	   Jakarta Kota	    Stasiun Pasar Minggu	  08:29:00	    08:30:00"<<endl;
        cout<<" 1099	   Jakarta Kota	    Stasiun Pasar Minggu	  08:58:00	    08:59:00"<<endl;
        cout<<" 1107	   Jakarta Kota	    Stasiun Pasar Minggu	  09:30:00	    09:31:00"<<endl;
        cout<<" 1113	   Jakarta Kota	    Stasiun Pasar Minggu	  10:01:00	    0:02:00 "<<endl;
        cout<<" 1131	   Jakarta Kota	    Stasiun Pasar Minggu	  11:32:00	    11:33:00"<<endl;
        cout<<" 1137	   Jakarta Kota	    Stasiun Pasar Minggu	  11:56:00	    11:57:00"<<endl;
        cout<<" 1173	   Jakarta Kota	    Stasiun Pasar Minggu	  15:04:00	    5:05:00 "<<endl;
        cout<<" 1209	   Jakarta Kota	    Stasiun Pasar Minggu	  18:16:00	    18:17:00"<<endl;
        cout<<" 1048	   Jakarta Kota     Stasiun Pasar Minggu	  06:41:00	    06:42:00"<<endl;
        cout<<" 1058	   Jakarta Kota     Stasiun Pasar Minggu	  07:27:00	    07:28:00"<<endl;
        cout<<" 1064	   Jakarta Kota     Stasiun Pasar Minggu	  07:57:00	    07:58:00"<<endl;
        cout<<" 1070	   Jakarta Kota     Stasiun Pasar Minggu	  08:17:00	    08:18:00"<<endl;
        cout<<" 1074	   Jakarta Kota	    Stasiun Pasar Minggu	  08:32:00	    08:33:00"<<endl;
        cout<<" 1080	   Jakarta Kota	    Stasiun Pasar Minggu	  08:56:00	    08:57:00"<<endl;
        cout<<" 1084       Jakarta Kota	    Stasiun Pasar Minggu      09:08:00      09:09:00"<<endl;
        cout<<" 1088	   Jakarta Kota	    Stasiun Pasar Minggu	  09:24:00	    09:25:00"<<endl;
        cout<<" 1096	   Jakarta Kota	    Stasiun Pasar Minggu	  10:09:00	    10:10:00"<<endl;
        cout<<" 1100	   Jakarta Kota     Stasiun Pasar Minggu	  10:24:00	    10:25:00"<<endl;
        cout<<" 1102	   Jakarta Kota     Stasiun Pasar Minggu	  10:32:00	    10:33:00"<<endl;
        cout<<" 1106	   Jakarta Kota	    Stasiun Pasar Minggu	  10:49:00	    10:50:00"<<endl;
        cout<<" 1108	   Jakarta Kota	    Stasiun Pasar Minggu	  10:55:00	    10:56:00"<<endl;
        cout<<" 1122	   Jakarta Kota	    Stasiun Pasar Minggu	  12:12:00	    12:13:00"<<endl;
        cout<<" 1204	   Jakarta Kota	    Stasiun Pasar Minggu	  19:15:00	    19:16:00"<<endl;
        cout<<" 1236	   Jakarta Kota	    Stasiun Pasar Minggu	  21:56:00	    21:57:00"<<endl;
        cout<<" 1242	   Jakarta Kota	    Stasiun Pasar Minggu	  22:31:00	    22:32:00"<<endl;
        cout<<" 1246	   Jakarta Kota	    Stasiun Pasar Minggu	  22:51:00	    22:52:00"<<endl;
        cout<<"======================================================================================="<<endl;
        cout<<"Jadwal Kereta Bogor: "<<endl;
        cout<<" 4024       Bogor            Stasiun Pasar Minggu      04:50:00      05:44:00"<<endl;
        cout<<" 4032       Bogor            Stasiun Pasar Minggu      05:29:00      06:23:00"<<endl;
        cout<<" 4036       Bogor            Stasiun Pasar Minggu      05:45:00      06:39:00"<<endl;
        cout<<" 4046       Bogor            Stasiun Pasar Minggu      05:53:00      07:13:00"<<endl;
        cout<<" 4048       Bogor            Stasiun Pasar Minggu      06:19:00      07:18:00"<<endl;
        cout<<" 4050       Bogor            Stasiun Pasar Minggu      06:24:00      07:24:00"<<endl;
        cout<<" 4052       Bogor            Stasiun Pasar Minggu      06:30:00      07:29:00"<<endl;
        cout<<" 4054       Bogor            Stasiun Pasar Minggu      06:35:00      07:34:00"<<endl;
        cout<<" 4056       Bogor            Stasiun Pasar Minggu      06:39:00      07:39:00"<<endl;
        cout<<" 4058       Bogor            Stasiun Pasar Minggu      06:45:00      07:44:00"<<endl;
        cout<<" 4060       Bogor            Stasiun Pasar Minggu      06:50:00      07:49:00"<<endl;
        cout<<" 4062       Bogor            Stasiun Pasar Minggu      07:03:00      07:54:00"<<endl;
        cout<<" 4064       Bogor            Stasiun Pasar Minggu      07:15:00      07:59:00"<<endl;
        cout<<" 4066       Bogor            Stasiun Pasar Minggu      07:20:00      08:04:00"<<endl;
        cout<<" 4068       Bogor            Stasiun Pasar Minggu      07:45:00      08:09:00"<<endl;
        cout<<"======================================================================================="<<endl;
    }
 else
    {
    cout<<"anda tulis salah";
 }



 return 0;
}
