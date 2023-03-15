#include <iostream>
using namespace std;

int main(){
    system("color 09");
    int jumlah_arr;
    int angka[] = {20,54,90,80,100};
    jumlah_arr = sizeof(angka)/sizeof(*angka);
    cout<<jumlah_arr;
}
