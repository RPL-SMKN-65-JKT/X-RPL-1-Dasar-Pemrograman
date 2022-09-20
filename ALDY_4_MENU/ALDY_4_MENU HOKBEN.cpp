#include <iostream>
using namespace std;

int main () {

system("color a");
printf("\tSELAMAT DATANG DI HOKBEN\n");
printf("\               MENU HOKBEN\n\n");

int menu;
int minuman;

cout <<  "==============================" << endl;
cout << "BERIKUT LIST MENU MAKANAN HOKBEN\n";
cout << "1. Super Bowl Beef Teriyaki + Tori Bal\n";
cout << "2. Paket Blackpepper Miso Chicken\n";
cout << "3. SIMPLE SET CHICKEN YAKINIKU 1\n";
cout << "4. SIMPLE SET CHICKEN TERIYAKI 2\n";
cout << "5. BENTO SPECIAL\n";
cout << "6. MINI BOWL EGG CHICKEN ROLL\n";
cout << "PILIH MAKANAN 1-6\n";
cin >> menu;

    switch (menu) {
case 1:
     cout << "Super Bowl Beef Teriyaki + Tori Bal + = 36.000" << endl;
     break;
case 2:
     cout << "Paket Blackpepper Miso Chicken = 36.00" << endl;
     break;
case 3:
     cout << "SIMPLE SET CHICKEN YAKINIKU 1 =  39.500" << endl;
     break;
case 4:
     cout << "SIMPLE SET CHICKEN YAKINIKU 2 =  39.500" << endl;
     break;
case 5:
     cout << "BENTO SPECIAL = 56.000" << endl;
     break;
case 6:
    cout << "MINI BOWL EGG CHICKEN ROLL = 21.000" << endl;
    break;
default:
    cout << "Menu Makanan Hanya Sampai 6";
    break;
    }


cout <<  "==============================" << endl;
cout << " BERIKUT MINUMAN NYA\n";
cout << "1. ICED COFFEE MILK\n";
cout << "2. KOORI KONYAKU STRAWBERRY\n";
cout << "3. LEMON TEA\n";
cout << "4. MILO\n";
cout << "5. COCA COLA\n";
cout << "6. AQUA\n";
cout << "7. Teh Kotak Sosro\n";
cout << "Pilih Menu Minuman 1-7 : " << endl;
cin >> minuman;

switch (minuman) {
case 1:
    cout << "ICED COFFEE MILK = 35.000" << endl;
    break;
case 2:
    cout << "KOORI KONYAKU STRAWBERRY = 25.000" << endl;
    break;
case 3:
    cout << "LEMON TEA = 11.000" << endl;
    break;
case 4:
    cout << "MILO = 10.000" << endl;
    break;
case 5:
    cout << "COCA COLA = 11.000" << endl;
    break;
case 6:
    cout << "AQUA = 9.000" << endl;
    break;
case 7:
    cout << "Teh Kotak Sosro = 10.000" << endl;
    break;
}

return 0; }

