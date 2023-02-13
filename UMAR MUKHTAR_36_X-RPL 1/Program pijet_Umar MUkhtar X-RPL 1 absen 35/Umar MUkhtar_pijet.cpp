#include<iostream>
using namespace std;

int main(){

    int jmlh_jam_pijat,harga_jam_pijat=6000,Total_jmlh_jam_pijat;
    int pilih,harga, total, bayar, diskon;
    string orang, nama;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ WELCOME ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ SELAMAT DATANG DI Pijat KRETEK ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "==================================================================================================" << endl;
    cout << "==================================================================================================" << endl;
    cout << "Menu Barang                                                                               Harga   " << endl;
    cout << "1. DEWASA (20-40)                                                                      Rp.  20000 " << endl;
    cout << "2. ANAK-ANAK  (9-12)                                                                   Rp.  15000 " << endl;
    cout << "3. LANSIA  (40+)                                                                       Rp.  26000 " << endl;
    cout << "4. TAMBAHAN JAM PIJAT                                                                  Rp.  5000  " << endl;
    cout << "==================================================================================================" << endl;
    cout << "                                               5.SELESAI                                          " << endl;
    cout << "==================================================================================================" << endl;

    do{
        cout << "PILIH SESUAI DENGAN KRITERIA UMUR ATAU USIA ANDA(1-4), DAN KETIK (5) UNTUK SELESAI: ";
        cin >> pilih;

        switch(pilih){
        case 1 :
            orang = "Dewasa";
            harga = 20000;
            cout << "Masukan nama anda terlebih dahulu" <<endl;
            cin >> nama;
            cout << "Jumlah jam pijat yang anda inginkan: ";
            cin >> jmlh_jam_pijat;
            Total_jmlh_jam_pijat = jmlh_jam_pijat * harga_jam_pijat;
            total += harga + Total_jmlh_jam_pijat;

            cout << endl << endl;

            cout << " Jumlah jam pijat : " << jmlh_jam_pijat << " jam.  " << "Harga : "<< harga << "  +  " << Total_jmlh_jam_pijat << endl << endl;
            cout << " Atas nama  " << nama << endl;
            cout << " Total = Rp. " << harga + Total_jmlh_jam_pijat << endl << endl;
            cout << "Total Semuanya = Rp. " << total <<endl<<endl;
            break;

        case 2 :
            orang = "Anak-Anak";
            harga = 15000;
            cout << "Masukan nama anda terlebih dahulu" <<endl;
            cin >> nama;
            cout << "Jumlah jam pijat : ";
            cin >> jmlh_jam_pijat;
            Total_jmlh_jam_pijat = jmlh_jam_pijat * harga_jam_pijat;
            total += harga + Total_jmlh_jam_pijat;

            cout << endl << endl;

            cout << " Jumlah jam pijat : " << jmlh_jam_pijat << " jam.  " << "Harga : "<< harga << "  +  " << Total_jmlh_jam_pijat << endl << endl;
            cout << " Atas nama  " << nama << endl;
            cout << " Total = Rp. " << harga + Total_jmlh_jam_pijat << endl << endl;
            cout << "Total Semuanya = Rp. " << total <<endl<<endl;
            break;
        case 3 :
            orang = "Lansia";
            harga = 26000;
            cout << "Masukan nama anda terlebih dahulu" <<endl;
            cin >> nama;
            cout << "Jumlah jam pijat : ";
            cin >> jmlh_jam_pijat;
            Total_jmlh_jam_pijat = jmlh_jam_pijat * harga_jam_pijat;
            total += harga + Total_jmlh_jam_pijat;

            cout << endl << endl;

            cout << " Jumlah jam pijat : " << jmlh_jam_pijat << " jam.  " << "Harga : "<< harga << "  +  " << Total_jmlh_jam_pijat << endl << endl;
            cout << " Atas nama  " << nama << endl;
            cout << " Total = Rp. " << harga + Total_jmlh_jam_pijat << endl << endl;
            cout << "Total Semuanya = Rp. " << total <<endl<<endl;
            break;
        case 4 :
            cout << "Atas nama siapa yang ingin menambah durasi pijat ini?" << endl;
            cin >> nama;
            harga = 5000;
            cout << "Berapa lama pijatan anda? : ";
            cin >> jmlh_jam_pijat;
            total += harga * jmlh_jam_pijat;
            cout << " Jumlah jam pijat : " << jmlh_jam_pijat << " jam.  " << "Harga : "<< harga <<endl << endl;
            cout << " Atas nama  " << nama << " Total = Rp. " << total << endl << endl;
            cout << "Total Semuanya = Rp. " << total <<endl<<endl;
            break;

        case 5 :
            cout << endl << endl;
        cout << "==================================================================================================" << endl;
            cout << "Jumlah bayar : " << total << endl;

            if(total >= 100000){
                diskon = 0.2 * total;
            }else if (total >= 50000){
                diskon = 0.08 * total;
            }else if (total >= 20000){
                diskon = 0.05 * total;
            }else {
                diskon = 0;
            }
            cout << "Diskon         : " << diskon << endl;
            cout << "Total Bayar    : " << total - diskon << endl;
            cout << "Bayar          : ";
            cin >> bayar;
            cout << "Kembali        : " << (bayar - (total - diskon)) << endl << endl;
            break;
        default :
            cout << "Pilihan anda salah,Isi dengan benar!!!" << endl << endl;
        }
    }while(pilih !=5);
    cout << endl << endl;
    cout << "Terima Kasih! (>w<)";

    return 0;
}
