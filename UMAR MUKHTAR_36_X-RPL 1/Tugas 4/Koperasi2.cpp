#include<iostream>
#include<string>
using namespace std;

int main(){

    int pilih, jmlh_barang, harga, total, bayar, diskon;
    string barang;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ WELCOME ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ SELAMAT DATANG DI KOPERASI SEKOLAH ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "==================================================================================================" << endl;
    cout << "==================================================================================================" << endl;
    cout << "Menu Barang            Harga                   MENU BARANG                     HARGA              " << endl;
    cout << "1. PENSIL             Rp.  1500                8.GESPER                     Rp.   16000           " << endl;
    cout << "2. PULPEN             Rp.  2000                9.DASI                       Rp.   6000            " << endl;
    cout << "3. BUKU               Rp.  5000                10.TOPI                      Rp.   10000           " << endl;
    cout << "4. TIPE-X             Rp.  4000                11.PENGHAPUS                 Rp.   3500            " << endl;
    cout << "5. ESKRIM TYPE A      Rp.  3000                12.TALI TAMBANG              Rp.   50000           " << endl;
    cout << "6. ESKRIM TYPE B      Rp.  4000                13.HANSAPLAST                Rp.   500             " << endl;
    cout << "7. BOLPOIN            Rp.  6500                                                                   " << endl;
    cout << "==================================================================================================" << endl;
    cout << "                                               14.SELESAI                                         " << endl;
    cout << "==================================================================================================" << endl;

    do{
        cout << "PILIH MENU BARANG YANG KAMU INGINKAN, DAN KETIK 14 UNTUK SELESAI: ";
        cin >> pilih;

        switch(pilih){
        case 1 :
            barang = "PENSIL";
            harga = 1500;
            cout << "Jumlah barang : ";
            cin >> jmlh_barang;
            total += harga * jmlh_barang;
            cout << jmlh_barang << " " << barang << " = Rp. " << harga * jmlh_barang << endl << endl;
            break;
        case 2 :
            barang = "PULPEN";
            harga = 2000;
            cout << "Jumlah barang : ";
            cin >> jmlh_barang;
            total += harga * jmlh_barang;
            cout << jmlh_barang << " " << barang << " = Rp. " << harga * jmlh_barang << endl << endl;
            break;
        case 3 :
            barang = "BUKU";
            harga = 5000;
            cout << "Jumlah barang : ";
            cin >> jmlh_barang;
            total += harga * jmlh_barang;
            cout << jmlh_barang << " " << barang << " = Rp. " << harga * jmlh_barang << endl << endl;
            break;
        case 4 :
            barang = "TIPE-X";
            harga = 4000;
            cout << "Jumlah barang : ";
            cin >> jmlh_barang;
            total += harga * jmlh_barang;
            cout << jmlh_barang << " " << barang << " = Rp. " << harga * jmlh_barang << endl << endl;
            break;
        case 5 :
            barang = "ESKRIM TYPE A";
            harga = 3000;
            cout << "Jumlah barang : ";
            cin >> jmlh_barang;
            total += harga * jmlh_barang;
            cout << jmlh_barang << " " << barang << " = Rp. " << harga * jmlh_barang << endl << endl;
            break;
        case 6 :
            barang = "EKSRIM TYPE B";
            harga = 4000;
            cout << "Jumlah barang : ";
            cin >> jmlh_barang;
            total += harga * jmlh_barang;
            cout << jmlh_barang << " " << barang << " = Rp. " << harga * jmlh_barang << endl << endl;
            break;
        case 7 :
            barang = "BOLPOIN";
            harga = 6500;
            cout << "Jumlah barang : ";
            cin >> jmlh_barang;
            total += harga * jmlh_barang;
            cout << jmlh_barang << " " << barang << " = Rp. " << harga * jmlh_barang << endl << endl;
            break;
        case 8 :
            barang = "GESPER";
            harga = 16000;
            cout << "Jumlah barang : ";
            cin >> jmlh_barang;
            total += harga * jmlh_barang;
            cout << jmlh_barang << " " << barang << " = Rp. " << harga * jmlh_barang << endl << endl;
            break;
        case 9 :
            barang = "DASI";
            harga = 6000;
            cout << "Jumlah barang : ";
            cin >> jmlh_barang;
            total += harga * jmlh_barang;
            cout << jmlh_barang << " " << barang << " = Rp. " << harga * jmlh_barang << endl << endl;
            break;
        case 10 :
            barang = "TOPI";
            harga = 10000;
            cout << "Jumlah barang : ";
            cin >> jmlh_barang;
            total += harga * jmlh_barang;
            cout << jmlh_barang << " " << barang << " = Rp. " << harga * jmlh_barang << endl << endl;
            break;
        case 11 :
            barang = "PENGHAPUS";
            harga = 3500;
            cout << "Jumlah barang : ";
            cin >> jmlh_barang;
            total += harga * jmlh_barang;
            cout << jmlh_barang << " " << barang << " = Rp. " << harga * jmlh_barang << endl << endl;
            break;
        case 12 :
            barang = "TALI TAMABNG";
            harga = 50000;
            cout << "Jumlah barang : ";
            cin >> jmlh_barang;
            total += harga * jmlh_barang;
            cout << jmlh_barang << " " << barang << " = Rp. " << harga * jmlh_barang << endl << endl;
            break;
        case 13 :
            barang = "HANSAPLATS";
            harga = 500;
            cout << "Jumlah barang : ";
            cin >> jmlh_barang;
            total += harga * jmlh_barang;
            cout << jmlh_barang << " " << barang << " = Rp. " << harga * jmlh_barang << endl << endl;
            break;
        case 14 :
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
    }while(pilih !=14);
    cout << "Terima Kasih! (>w<)";

    return 0;
}
