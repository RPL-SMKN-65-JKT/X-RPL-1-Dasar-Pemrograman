#include <iostream>
using namespace std;

int main(){

    char grade;
cout << "Umar Mukhtar absen 36" << endl;
cout << "=====================" << endl;
    cout << "inputkan grade (A-F): ";
    cin >> grade;

    switch (toupper(grade)){
        case 'A':
            cout << "Luar Biasa!" << endl;
            break;
        case 'B':
        case 'C':
            cout << "Bagus!" << endl;
            break;
        case 'D':
            cout << "Anda lulus" << endl;
            break;
        case 'E':
        case 'f':
            cout << "Anda remidi" << endl;
            break;
        default:
            cout << "Grade Salah" << endl;
    }

    return 0;
}
