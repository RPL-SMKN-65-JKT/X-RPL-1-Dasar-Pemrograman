#include <iostream>
using namespace std;

int main() {

    system("color b1");

    string orang,orang2,orang3,orang4,orang5,orang6;
    int jo;
    int jumlah,jumlah2,jumlah3;
    int total,total2,total3;
    int durasi,durasi2,durasi3,durasi4,durasi5,durasi6;
    int ko;
    int harga = 20000;
    int jk,jb,jt,jd,jj;
    int orng = 1000;
    char kelar;

        cout << "=================================" << endl;
        cout << "Welcome to Tukeng Pijet" << endl;
        cout << "Harga per orang 20.000" << endl;
        cout << "Sejam nya 1.000" << endl;
        cout << "=================================" << endl;

        do {
        cout << "Masukan jumlah orang: ";
        cin >> jo;

            switch(jo){
        case 1:
            cout << "Ketik namanya dahulu: ";
            cin >> orang;
            cout << "Ingin berapa jam mijet nya: ";
            cin >> durasi;
            durasi = durasi * orng;
            total = durasi + harga;
            cout << "Oke total nya jadi " << "Rp " << total << endl;
            cout << "Ingin lanjut (Y/T): ";
            cin >> kelar;
            cout << "=================================" << endl;
            break;

        case 2:
            cout << "Ketik nama orang 1: ";
            cin >> orang2;
            cout << "Ketik nama orang 2: ";
            cin >> orang3;
            cout << "" << endl;
            cout << "Oke " << orang2 << " Ingin berapa jam mijet nya: ";
            cin >> durasi2;
            cout << "Oke " << orang3 << " Ingin berapa jam mijet nya: ";
            cin >> durasi3;
            jumlah2 = harga * 2;
            total2 = durasi2 + durasi3;
            ko = total2 * orng + jumlah2;
            cout << "Total nya jadi " << "Rp " << ko << endl;
            cout << "Ingin lanjut (Y/T): ";
            cin >> kelar;
            cout << "=================================" << endl;
            break;

        case 3:
            cout << "Ketik nama orang 1: ";
            cin >> orang4;
            cout << "Ingin berapa jam mijet nya: ";
            cin >> durasi4;
            cout << "" << endl;
            cout << "Ketik nama orang 2: ";
            cin >> orang5;
            cout << "Ingin berapa jam mijet nya: ";
            cin >> durasi5;
            cout << "" << endl;
            cout << "Ketik nama orang 3: ";
            cin >> orang6;
            cout << "Ingin berapa jam mijet nya: ";
            cin >> durasi6;
            jk = harga * 3;
            jb = durasi4 + durasi5 + durasi6;
            jd = jb * orng + jk;
            cout << "Total nya jadi " << "Rp " << jd << endl;
            cout << "Ingin lanjut (Y/T): ";
            cin >> kelar;
            cout << "=================================" << endl;
            break;
        default:
            cout << "Mohon maaf minimal pelanggan kami hanya sampai 3 saja";
        break;
            }

        }while(kelar != 'T');

        cout << "Terimakasih jangan lupa datang lagi yaaa";
}
