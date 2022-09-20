#include <iostream>
using namespace std;

int main() {

system("color a");
printf("\t   WELCOME TO\n");
printf("    LIST & MENU RUMAH BEGRERAK\n\n");

int menu;
int minuman;
int jam;

cout << "=======================================" << endl;
printf("MENU MAKANAN: \n");
printf("1.Nasi Goreng = 15.000\n");
printf("2.Mie Rebus = 9.000\n");
printf("3.Mie Goreng = 9.000\n");
printf("4.Mie Ayam + Bakso = 15.000 \n");
printf("5.Ayam Geprek + Nasi = 22.000 \n\n");

cout << "PILIH MENU MAKANAN 1-5: ";
cin >> menu;

    switch(menu) {
    case 1:
        cout << "Nasi Goreng = RP 15.000" << endl;
        break;
    case 2:
        cout << "Mie Rebus = RP 9.000" << endl;
        break;
    case 3:
        cout << "Mie Goreng = RP 9.000" << endl;
        break;
    case 4:
        cout << "Mie Ayam + Bakso = RP 15.000" << endl;
        break;
    case 5:
        cout << "Ayam Geprek + Nasi = RP 22.000" << endl;
        break;
    default:
        cout << "Menu Makanan Hanya Sampai 5 Saja" << endl;
        break;
    }
    cout << "=======================================" << endl;

    printf("MENU MINUMAN: \n");
    printf ("1.ES TEH MANIS\n");
    printf ("2.AQUA\n");
    printf ("3.AIR PUTIH + ES\n");
    printf ("4.Teh Manis Panas\n");
    printf ("5.Fanta + Es\n");
    printf ("6.Coca Cola + Es\n\n");

    cout << "PILIH MENU MNUMAN 1-6: ";
    cin >> minuman;

        switch (minuman) {
    case 1:
        cout << "ES TEH MANIS = 5.000" << endl;
        break;
    case 2:
        cout << "AQUA = 3.000" << endl;
        break;
    case 3:
        cout << "AIR PUTIH + ES = 4.000" << endl;
        break;
    case 4:
        cout << "TEH MANIS PANAS = 3.000" << endl;
        break;
    case 5:
        cout << "FANTA + ES = 8.000" << endl;
        break;
    case 6:
        cout << "COCA COLA + ES = 8.500" << endl;
        break;
    default:
        cout << "MENU MINUMAN HANYA SAMPAI 6" << endl;
        break;
        }
    cout << "=======================================" << endl;


    cout << "" << endl;
    cout << "" << endl;
    cout << "UNTUK TAMBAHANYA" << endl;
    cout << "RUMAH BERGERAK JUGA MENYEDIAKAN TEMPAT UNTUK BERMAIN SKATEBOARD" << endl;
    cout << "BERIKUT LIST HARGA PERJAM NYA UNTUK BERMAIN SKATEBOARD:" << endl;
    cout << "1 Jam: 35.000" << endl;
    cout << "2 Jam: 70.000" << endl;
    cout << "3 Jam: 105.000" << endl;

    cout << "" << endl;
    printf("\tTHANKS");
    cout << "" << endl;

    return 0;
}
