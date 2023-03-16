#include <iostream>
using namespace std;

int main() {

    string nick[] = {"ALDY" , "X-PPLG 1"}; // MEMBUAT ARRAY
        int i = sizeof(nick)/sizeof(*nick); // MENGAMBIL BANYAKNYA ISI ARRAY

    for(int a = 0; a < i; a++){
        cout << nick [a] << endl;
    }

    return 0;
}

