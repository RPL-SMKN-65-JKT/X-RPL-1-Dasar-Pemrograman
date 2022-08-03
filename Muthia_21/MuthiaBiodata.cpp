#include <iostream>
using namespace std;

int main(){
    string nama;
    string kelas;
    int umur;
    string hobi;


    cout << "Type your name: \n";
    cin >> nama;
    cout << "Type your class: \n";
    cin >> kelas;
    cout << "Type your age: \n";
    cin >> umur;
    cout << "Type your hobby: \n";
    cin >> hobi;
    cout << " Hi "<<nama<<" kelas "<<kelas<<" dengan umur "<<umur<<" dan hobi "<<hobi;
    return 0;
}

