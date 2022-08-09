#include <iostream>
using namespace std;

int main() {

    char grade;

    cout << "Inputkan grade (A-F)|: ";
    cin >> grade;

    switch (toupper (grade)) {
      case 'A':
          cout << "Luar biasa!" << endl;
          break;
      case 'B':
          cout << "Teruskan Sampai dapet A" << endl;
          break;
      case 'C':
          cout << "Bagus!" << endl;
          break;
      case 'D':
          cout << "Anda lulus" << endl;
          break;
      case 'E':
          cout << "Tdak lulus" << endl;
          break;
      case 'F':
          cout << "Anda remidi" << endl;
          break;
      default:
          cout << "Grade Salah!" << endl;
   }

 return 0;
}
