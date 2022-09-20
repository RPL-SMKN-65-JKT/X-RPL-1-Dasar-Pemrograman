#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main() {
    int kdMakanan, kdMinuman, hrgMakanan, hrgMinuman, total;
    string nmMakanan, nmMinuman;

    while(1){
        //reset input
        hrgMakanan = 0;
        hrgMinuman = 0;
        total = 0;

        cout<<"==== Menu Makanan ====\n";
        cout<<"1. Bakso [5000]\n";
        cout<<"2. Soto [7000]\n";
        cout<<"3. Mie Ayam [6000]\n";
        cout<<"Masukkan pilihan Anda: ";
        cin>>kdMakanan;

        switch(kdMakanan)
        {
            case 1:
                nmMakanan = "Bakso";
                hrgMakanan += 5000;
                break;
            case 2:
                nmMakanan = "Soto";
                hrgMakanan += 7000;
                break;
            case 3:
                nmMakanan = "Mie Ayam";
                hrgMakanan += 6000;
                break;
            default:
                cout<<"nPilihan tidak ada";
        }

        cout<<"\n===Daftar Minuman===\n";
        cout<<"1. Es Teh [2500]\n";
        cout<<"2. Es Kelapa Muda [5000]\n";
        cout<<"3. Jus Jambu [3000]\n";
        cout<<"Masukkan pilihan Anda: ";
        cin>>kdMinuman;

        switch(kdMinuman)
        {
            case 1:
                nmMinuman = "Es Teh";
                hrgMinuman += 2500;
                break;
            case 2:
                nmMinuman = "Es Kelapa Muda";
                hrgMinuman += 5000;
                break;
            case 3:
                nmMinuman = "Jus Jambu";
                hrgMinuman += 3000;
                break;
            default:
                cout<<"Pilihan tidak adan";
        }

        total = hrgMakanan+hrgMinuman;
        cout<<"\n==Pesanan Anda==\n";
        cout<<"Makanan: "<<nmMakanan<<endl;
        cout<<"Minuman: "<<nmMinuman<<endl;
        cout<<"Total: "<<total<<endl;
        getch();
        system("cls");
    }
return 0;
}