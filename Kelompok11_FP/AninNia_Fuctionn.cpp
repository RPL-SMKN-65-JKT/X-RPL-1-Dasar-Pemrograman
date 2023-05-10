#include <iostream>
using namespace std;

int penjumlahan (int a, int b);

int main() {
    int x, y, z;
    x=5;
    y=10;

    z = penjumlahan(x,y);

    cout<<"hasil penjumlahan "<<x<< " dan "<<y<<" adalah ";
    cout<<z<<endl;
    return 0;
}

int penjumlahan (int a, int b){
    int c = a + b;
    return c;
}
