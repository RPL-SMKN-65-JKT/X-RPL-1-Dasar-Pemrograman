#include <iostream>
using namespace std;

int main() {

    char grade;

    cout<< "inputkan grade (A-F):";
    cin>> grade;

    switch (toupper(grade)) {
    case 'A':
        cout << "luar biasa!" << endl;
        break;
    case 'B':
    case 'C':
        cout << "bagus!" << endl;
        break;
    case 'D':
        cout << "Anda lulus" << endl;
    case 'E':
    case 'F':
        cout << "Anda remedi" << endl;
        break;
    default:
        cout << "grade salah" << endl;

    }

    return 0;
}
