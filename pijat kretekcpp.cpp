#include <iostream>
using namespace std;

int main(){

    int jumlah;
    string orang,orang2,orang3,orang4,orang5,orang6;
    int durasi,durasi2,durasi3,durasi4,durasi5,durasi6;
    int harga_jam=20000;
    int total;
    char bagir;

        cout << "Jasa pijat kretek" << endl;
        cout << "Harga perorang Rp20.000" << endl;
    do{
        cout << "" << endl;
        cout << "Masukkan jumlah orang: ";
        cin >> jumlah;

        switch(jumlah){
        case 1:
             cout << "Orang 1: " << endl;
             cin >> orang;
             cout << "Baiklah " << orang << " Ingin berapa lama Durasinya?" << endl;
             cin >> durasi;
             durasi=durasi*harga_jam;
             cout << "Baik Total Nya " << orang << " " << durasi << endl;
             cout<<"Masih ada Y/T :";
             cin >> bagir;
             cout << "==================================================================";
             break;
           case 2:
                cout << "orang 1: " << endl;
                cin >> orang2;
                cout << "orang 2: " << endl;
                cin >> orang3;
                cout << "Baiklah " << orang2 << " ingin berapa lama Durasinya?" << endl;
                cin >> durasi2;
                cout << "Baiklah " << orang3 << " ingin berapa lama Durasinya?" << endl;
                 cin >> durasi3;
                durasi2=durasi2*harga_jam;
                durasi3=durasi3*harga_jam;
                cout << "Baik Total Nya Jadi " << durasi2 << endl;
                cout << "Baik Total Nya Jadi " << durasi3 << endl;
                cout<<"Masih ada Y/T :";
                cin >> bagir;
                break;
                cout << "==================================================================";
            case 3:
                 cout << "orang 1: " << endl;
                 cin >> orang4;
                 cout << "orang 2: " << endl;
                 cin >> orang5;
                 cout << "orang 3: " << endl;
                 cin >> orang6;
                 cout << "Baiklah " << orang4 << " ingin berapa lama Durasinya?" << endl;
                 cin >> durasi4;
                 cout << "Baiklah " << orang5 << " ingin berapa lama Durasinya?" << endl;
                 cin >> durasi5;
                 cout << "Baiklah " << orang6 << " ingin berapa lama Durasinya?" << endl;
                 cin >> durasi6;
                 durasi4=durasi4*harga_jam;
                 durasi5=durasi5*harga_jam;
                 durasi6=durasi6*harga_jam;
                 cout << "Baik Total Nya Jadi " << durasi4 << endl;
                 cout << "Baik Total Nya Jadi " << durasi5 << endl;
                 cout << "Baik Total Nya Jadi " << durasi6 << endl;
                 cout<<"Masih ada Y/T :";
                 cin >> bagir;
                 break;
                 cout << "==================================================================";
                 default:
                     cout << "maaf batas maksimal hanya sampai 3!" << endl;}
            }while ( bagir/='Y');

 return 0;
    }

