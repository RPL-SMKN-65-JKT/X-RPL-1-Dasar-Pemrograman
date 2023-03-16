#include <iostream>
using namespace std;

int main() {

system("color b");

    char nick[] = {'A' , 'K'}; // MEMBUAT ARRAY
        int k = sizeof(nick)/sizeof(*nick); // MENGAMBIL BANYAKNYA ISI ARRAY

    int a; //INITIALIZATION EXPRESSION
    do{
        cout << nick [a] << " ";        //CODE BLOCK TO BE EXCUTED /STATEMENT
        a++;                            //INCREMENT
    }while(a < k);                      //CONDITION


    return 0;
}
