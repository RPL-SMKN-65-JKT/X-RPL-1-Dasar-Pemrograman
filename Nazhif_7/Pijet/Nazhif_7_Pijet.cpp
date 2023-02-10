#include <iostream>

using namespace std;

int main()
{
    int jumlah;
    string orang;
    int durasi;
    int harga_per=20000;
    int harga_jam=1000;
    int total;
    char ulang;
    int tambah, nambah;
    int dobel, tripel;
    int bayangan;
    int nambah_org;

    /// Jan Copy Trus Dirubah Seakan Kodingan Buat Sendiri

        do {
        cout << "===================================" << endl;
        cout << "Jasa Pijet Kretek" << endl;
        cout << "Harga Perorang Rp20.000" << endl;
        cout << "Harga Per Jam Rp1.000" << endl;
        cout << "===================================" << endl;
        cout << "Masukan Jumlah Orang: " << endl;
        cin >> jumlah;

        switch(jumlah) {
        case 1:
        cout << "Orang 1: " << endl;
        cin >> orang;
        cout << "Baiklah " << orang << " Ingin Berapa Lama Durasinya?" << endl;
        cin >> durasi;
        durasi=durasi*harga_jam;
        total=durasi+harga_per;
        cout << "Baik Total Nya Jadi " << total << endl;
        break;

        case 2:
        cout << "Orang 1: " << endl;
        cin >> orang;
        cout << "Baiklah " << orang << " Ingin Berapa Lama Durasinya?" << endl;
        cin >> tambah;
        cout << "Orang 2: " << endl;
        cin >> orang;
        cout << "Baiklah " << orang << " Ingin Berapa Lama Durasinya?" << endl;
        cin >> durasi;
        nambah_org=harga_per*2;
        dobel=tambah+durasi;
        bayangan=dobel*harga_jam+nambah_org;
        cout << "Baik Total Nya Jadi " << bayangan << endl;
        break;

        case 3:
        cout << "Orang 1: " << endl;
        cin >> orang;
        cout << "Baiklah " << orang << " Ingin Berapa Lama Durasinya?" << endl;
        cin >> tambah;
        cout << "Orang 2: " << endl;
        cin >> orang;
        cout << "Baiklah " << orang << " Ingin Berapa Lama Durasinya?" << endl;
        cin >> nambah;
        cout << "Orang 3: " << endl;
        cin >> orang;
        cout << "Baiklah " << orang << " Ingin Berapa Lama Durasinya?" << endl;
        cin >> durasi;
        nambah_org=harga_per*3;
        tripel=tambah+nambah+durasi;
        bayangan=tripel*harga_jam+nambah_org;
        cout << "Baik Total Nya Jadi " << bayangan << endl;
        break;
        default:
            cout << "Maaf Batasan Hanya Sampai 3!" << endl;
        }
        cout << endl;

        cout << "===================================" << endl;
        cout << "Apakah Anda Ingin Mengulang? [y/t]" << endl;
        cin >> ulang;
    }
    while (ulang != 't');

         cout << "Terimakasih" << endl;

    return 0;
}
