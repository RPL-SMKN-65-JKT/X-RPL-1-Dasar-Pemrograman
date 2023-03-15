#include <iostream>
using namespace std;

int main (){ //fungsi utama dalam memulai suatu program
    char huruf[5] = {'a','b','c','d','e'}; //typedata,array,index berisi value
    cout<< "ini huruf: "<<huruf[2] <<endl; //statment

    for(char i=0; i<5;i++){//kondisi,increment
        cout<< "huruf: "<<huruf[i] <<endl; //statment
    }
   return 0;
}
