#include <iostream>
using namespace std;

int main(){

    char grade;

    cout << "Inputkan grade (A-F) ";
    cin >> grade;

    switch (toupper(grade)) {
        case 'A':
            cout << "Luar Biasa!" << endl;
            break;
        case 'B':
        case 'C':
            cout << "Bagus!" << endl;
            break;
        case 'D':
            cout << "Anda Lulus" << endl;
            break;
        case 'E':
        case 'F':
            cout << "Anda Remidi" << endl;
            break;
        default:
            cout << "Grade Salah!" << endl;
    }

    return 0;
}
