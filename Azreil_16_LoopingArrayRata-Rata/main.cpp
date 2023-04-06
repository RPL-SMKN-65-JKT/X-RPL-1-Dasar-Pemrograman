#include <iostream>
using namespace std;

//function
float rta(int ak[], int ukr) {
    int jmlh = 0;
    for(int i = 0; i < ukr; i++){
        jmlh += ak[i];
    }
    return (float) jmlh / ukr;
}

int main(){

    system("color 74");

    int ukr;
        cout << "Masukan jumlah array: ";
        cin >> ukr;

        cout << "===============================" << endl;

    int ak[ukr];
    for(int i = 0; i < ukr; i++){
        cout << "Masukan angka array " << i + 1 << " = ";
        cin >> ak[i];
    }

    cout << "===============================" << endl;
    cout << "" << endl;

    cout << "rata rata nya adalah: " << rta(ak, ukr) << endl;

    return 0;
}
