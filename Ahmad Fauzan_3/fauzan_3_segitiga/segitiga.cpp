#include<iostream>

using namespace std;
int main () {

    int a,b,c;
    cout << "Input sisi A: ";
    cin >> a;
    cout << "Input sisi B: ";
    cin >> b;
    cout << "Input sisi C: ";
    cin >> c;
    cout << "Segitiga Sama sisi"<< endl;
    int d,e,f;
    cout << "Input sisi D: ";
    cin >> d;
    cout << "Input sisi E: ";
    cin >> e;
    cout << "Input sisi F: ";
    cin >> f;
    cout << "Segitiga Sama kaki"<< endl;
    int g,h,i;
    cout << "Input sisi G: ";
    cin >> g;
    cout << "Input sisi H: ";
    cin >> h;
    cout << "Input sisi I: ";
    cin >> i;
    cout << "Segitiga sembarang"<< endl;
    cout << "==========================="<< endl;

    if ('a=b=c')
       cout << "Segitiga sama sisi"<< endl;
    if ('d<e<f')
       cout << "Segitiga sama kaki"<< endl;
    if ('g>h>i')
       cout << "Segitiga sembarang"<< endl;

return 0;
}
