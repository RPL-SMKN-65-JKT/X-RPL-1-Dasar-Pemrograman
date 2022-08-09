#include <iostream>

using namespace std;

int main()
{
    char grade;

    cout << "Inputkan grade (A-F): ";
    cin >> grade;

    switch (toupper(grade)){
        case 'A':
            cout << "Ga Nyontek nih?" << endl;
            break;
        case 'B':
        case 'C':
            cout << "Bagus!" << endl;
            break;
        case 'D':
            cout << "Ngepas!"<< endl;
            break;
        case 'E':
        case 'F':
            cout << "Anda bodoh!" << endl;
            break;
        default:
            cout << "Grade Salah" << endl;
    }
    return 0;
}
