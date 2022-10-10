#include <iostream>
using namespace std;

//Thalita X-PPLG 1
int menu1=31000;
int menu2=31000;
int menu3=32000;
int menu4=8000;
int menu5=8000;
int a;
int b;
int jumlah;
int jumlah2;
int jumlah_total;
int pilih;
int pilih2;
int bayar;

int main(){

    cout << "======Daftar Menu McDonald's=======" <<endl;
    cout << "|1.Chicken Burger = Rp.31000      |" <<endl;
    cout << "|2.CheeseBurger   = Rp.31000      |" <<endl;
    cout << "|3.PaNas 1        = Rp.32000      |" <<endl;
    cout << "|4.Fanta          = Rp.8000       |" <<endl;
    cout << "|5.Coca Cola      = Rp.8000       |" <<endl;
    cout << "===================================" <<endl;

        cout << "************Pilih Menu************" <<endl;
        cin >> pilih;

        switch(pilih){
        case 1:
            cout << "Chicken Burger Rp.31000"<<endl;
            cout << "Jumlah yg dipesan = ";
            cin >> a;
            cout <<menu1*a<<endl;
            jumlah=menu1*a;
            goto menu;
        break;
        case 2:
            cout << "CheeseBurger Rp.31000" <<endl;
            cout << "Jumlah yg dipesan = ";
            cin >> a;
            cout <<menu2*a<<endl;
            jumlah=menu2*a;
            goto menu;
        break;
        case 3:
            cout << "PaNas 1 Rp.32000" <<endl;
            cout << "Jumlah yg dipesan = ";
            cin >> a;
            cout <<menu3*a<<endl;
            jumlah=menu3*a;
            goto menu;
        break;
        case 4:
            cout << "Fanta Rp.8000" <<endl;
            cout << "Jumlah yg dipesan = ";
            cin >> a;
            cout <<menu4*a<<endl;
            jumlah=menu4*a;
            goto menu;
        break;
        case 5:
            cout << "Coca Cola Rp.8000" <<endl;
            cout << "Jumlah yg dipesan = ";
            cin >> a;
            cout <<menu5*a<<endl;
            jumlah=menu5*a;
            goto menu;
        break;
        default:
            cout << "Menu yang dimasukkan tidak sesuai"<<endl;
        break;
        }
        menu:
        cout << "======Daftar Menu McDonald's=======" <<endl;
        cout << "|1.Chicken Burger = Rp.31000      |" <<endl;
        cout << "|2.CheeseBurger   = Rp.31000      |" <<endl;
        cout << "|3.PaNas 1        = Rp.32000      |" <<endl;
        cout << "|4.Fanta          = Rp.8000       |" <<endl;
        cout << "|5.Coca Cola      = Rp.8000       |" <<endl;
        cout << "===================================" <<endl;
        cout << "Ketik 0 jika selesai memesan"<<endl;
        cout << "************Pilih Menu************" <<endl;
        cin >> pilih2;

        switch(pilih2){
        case 1:
            cout << "Chicken Burger Rp.31000"<<endl;
            cout << "Jumlah yg dipesan = ";
            cin >> b;
            cout << menu1*b<<endl;
            jumlah2=menu1*b;
        break;
        case 2:
            cout << "CheeseBurger Rp.31000" <<endl;
            cout << "Jumlah yg dipesan = ";
            cin >> b;
            cout << menu2*b<<endl;
            jumlah2=menu2*b;
        break;
        case 3:
            cout << "PaNas 1 Rp.32000" <<endl;
            cout << "Jumlah yg dipesan = ";
            cin >> b;
            cout <<menu3*b<<endl;
            jumlah2=menu3*b;
        break;
        case 4:
            cout << "Fanta Rp.8000" <<endl;
            cout << "Jumlah yg dipesan = ";
            cin >> b;
            cout <<menu4*b<<endl;
            jumlah2=menu4*b;
        break;
        case 5:
            cout << "Coca Cola Rp.8000" <<endl;
            cout << "Jumlah yg dipesan = ";
            cin >> b;
            cout <<menu5*b<<endl;
            jumlah2=menu5*b;
        break;
        case 0:
            goto akhir;
        break;
        default:
            cout << "Menu yang dimasukkan tidak sesuai"<<endl;
        break;
        }
        akhir:
        cout << "=========Total==========" <<endl;
        cout <<jumlah+jumlah2<<endl;
        jumlah_total=jumlah+jumlah2;
        cout << "Jumlah bayar = ";
        cin>>bayar;
        cout <<"Kembalian = "<<bayar-jumlah_total<<endl;
        cout << "========================" <<endl;
}
