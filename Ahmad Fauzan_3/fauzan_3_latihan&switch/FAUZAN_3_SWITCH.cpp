#include <iostream>
 using namespace std;

int main (){

    char grade ;

    cout << "inputkan grade (A-F):";
    cin >> grade;

    switch (toupper(grade)){
        case 'A':
            cout << "Keren" << endl;
           break;
        case 'B':
            cout << "Nice,keep it!!" << endl;
            break;
        case 'C':
            cout << "Bagus!" << endl;
            break;
        case 'D':
            cout << "Anda lulus" << endl;
            break;
        case 'E':
        case 'F':
            cout << "Anda remidi" << endl;
            break;
        default:
            cout << "Grade Salah!" << endl;
}

 return 0;
}