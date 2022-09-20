#include <iostream>
using namespace std;

int main () {

system("color a");
printf("\tSELAMAT DATANG DI\n");
printf("           WARKOP KIW \n\n");

int minuman;
int makanan;
int hasil;

cout << "==============================" << endl;
printf("MENU MINUMAN\n");
printf("1. KOPI\n");
printf("2. ES\n");
printf("3. HANGAT\n");
printf("4. AIR MINERAL\n");

cout << "pilih menu minuman 1-4 :";
cin >> minuman;

    switch(minuman) {
case 1:
    cout << "KOPI = RP 3.000" << endl;
    break;
case 2:
    cout << "ES = RP 6.OOO" << endl;
    break;
case 3:
    cout << "HANGAT = RP 5.000" << endl;
    break;
case 4:
    cout << "AIR MINERAL = RP 2.500" << endl;
    break;
default:
    cout << "minuman hanya 4 jenis saja" << endl;
    break;

    }

cout << "==============================" << endl;
printf("MENU MAKANAN\n");
printf("1. ROTI BAKAR\n");
printf("2. MIE REBUS\n");
printf("3. MIE GORENG\n");
printf("4. GORENGAN\n");
printf("5. ANEKA KUE\n");

cout << "pilih menu makanan 1-5 : ";
cin >> makanan;

    switch (makanan) {
case 1:
    cout << "ROTI BAKAR = RP 12.000" << endl;
    break;
case 2:
    cout << "MIE REBUS = RP 7.000" << endl;
    break;
case 3:
    cout << "MIE GORENG = RP 7.000" << endl;
    break;
case 4:
    cout << "GORENGAN = RP 1.000" << endl;
    break;
case 5:
    cout << "ANEKA KUE = RP 2.000" << endl;
    break;
default :
    cout << "makanan hanya 5 jenis saja" << endl;
    break;
    }
cout << "=======================================" << endl;

cout << "" << endl;
cout << "DI SINI JUALAN ES BATU RP 1.500" << endl;
cout << "WARKOP KIW JUGA MENYEDIAKAN GRATIS WIFI" << endl;
cout << "" << endl;
cout << "\t-TERIMA KASIH-" << endl;
cout << "" << endl;


return 0;

}




