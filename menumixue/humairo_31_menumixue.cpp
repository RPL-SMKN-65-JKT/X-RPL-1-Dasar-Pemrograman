#include<iostream>
using namespace std;

int main () {
    char nomenuMinuman,nomenuIcecream;
    int harga1,harga2;

    cout<< "DAFTAR MENU" <<endl;
    cout<< "MINUMAN:" <<endl;
    cout<< "1. Hawaiian tea Rp22000" <<endl;
    cout<< "2. Jasmine tea Rp16000" <<endl;
    cout<< "ICE CREAM: " <<endl;
    cout<< "1. chocolate ice cream Rp6000" <<endl;
    cout<< "2. strawberry ice cream Rp6000" <<endl;

    cout<< "silahkan input nomor menu minuman" << endl;
    cin>>nomenuMinuman;

    switch (nomenuMinuman){
    case '1':
        cout<< "anda memesan Hawaiian tea" <<endl;
        harga1 =22000;
        break;
    case '2':
        cout<< "anda memesan jasmine tea" <<endl;
        harga2 =16000;
        break;
    default:
        cout<< "tidak ada dimenu" <<endl;
}
        cout<< "silahkan input nomor menu ice cream" << endl;
    cin>>nomenuIcecream;

    switch (nomenuIcecream){
    case '1':
        cout<< "anda memesan chocolate ice cream" <<endl;
        harga1 =6000;
        break;
    case '2':
        cout<< "anda memesan strawberry ice cream" <<endl;
        harga2 =6000;
        break;
    default:
        cout<< "tidak ada dimenu" <<endl;
    }
    cout<< "=======================" <<endl;
    cout<< "harga yang harus anda bayar adalah Rp" <<harga1+harga2 <<endl;
    return 0;
}


