#include <iostream>

using namespace std;

int main()
{
    int jumlah,total,tambah,nambah,dobel,tripel,bayangan,nambah_org;
    string orang;
    int durasi;
    int harga_per=20000;
    int harga_jam=1000;
    char ulang;

        do {
        cout << "|*****jasa pijet kretek*****|" << endl;
        cout << "|   Harga Perorang Rp20000  |" << endl;
        cout << "|    Harga Per Jam Rp1000   |" << endl;
        cout << "===================================" << endl;
        cout << "Masukan Jumlah Orang: ";
        cin >> jumlah;

        switch(jumlah) {
        case 1:
        cout << "Ketik Nama Orang 1: ";
        cin >> orang;
        cout << "Baiklah " << orang << " Berapa Lama Durasinya: ";
        cin >> durasi;
        durasi=durasi*harga_jam;
        total=durasi+harga_per;
        cout << "Total Nya Jadi: " << total << endl;
        break;

        case 2:
        cout << "Ketik Nama Orang 1: ";
        cin >> orang;
        cout << "Baiklah " << orang << " Berapa Lama Durasinya: ";
        cin >> tambah;
        cout << "Ketik Nama Orang 2: ";
        cin >> orang;
        cout << "Baiklah " << orang << " Berapa Lama Durasinya: ";
        cin >> durasi;
        nambah_org=harga_per*2;
        dobel=tambah+durasi;
        bayangan=dobel*harga_jam+nambah_org;
        cout << "Total Nya Jadi: " << bayangan << endl;
        break;

        case 3:
        cout << "Ketik Nama Orang 1: ";
        cin >> orang;
        cout << "Baiklah " << orang << " Berapa Lama Durasinya: ";
        cin >> tambah;
        cout << "Ketik Nama Orang 2: ";
        cin >> orang;
        cout << "Baiklah " << orang << " Berapa Lama Durasinya: ";
        cin >> nambah;
        cout << "Ketik Nama Orang 3: ";
        cin >> orang;
        cout << "Baiklah " << orang << " Berapa Lama Durasinya: ";
        cin >> durasi;
        nambah_org=harga_per*3;
        tripel=tambah+nambah+durasi;
        bayangan=tripel*harga_jam+nambah_org;
        cout << "Total Nya Jadi: " << bayangan << endl;
        break;
        default:

        cout << "Maaf Hanya Sampai 3!";
        }
        cout << "Ingin Mengulang? [y/t]: ";
        cin >> ulang;
        cout << "===================================" << endl;
        }
    while (ulang != 't');

         cout << "Terimakasih sudah menggunakan jasa kami";

    return 0;
}
