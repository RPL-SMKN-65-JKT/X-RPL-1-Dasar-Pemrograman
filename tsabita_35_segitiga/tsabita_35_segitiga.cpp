#include<iostream>
using namespace std;

int main (){

int a,b,c;
int x,y,z;
int g,f,h;

    cout <<"==============="<<
 endl;
    cout <<"Masukan sisi A:";
    cin >> a;
    cout <<"Masukan sisi B:";
    cin >> b;
    cout <<"Masukan sisi C:";
    cin >> c;
    cout <<"Segitiga Sama sisi"<< endl;
    cout <<"================"<<
endl;

    cout <<"Masukan sisi X:";
    cin >> x;
    cout <<"Masukan sisi Y:";
    cin >> y;
    cout <<"Masukan sisi Z:";
    cin >> z;
    cout <<"Segitiga Sama kaki"<< endl;
    cout <<"==============="<<
endl;

    cout <<"Masukan sisi G:";
    cin >> g;
    cout <<"Masukan sisi F:";
    cin >> f;
    cout <<"Masukan sisi H:";
    cin >> h;
    cout <<"Segitiga sembarang"<< endl;
    cout <<"==============="<<
endl;

    if (a==b&&a==c)
        cout <<"Segitiga sama sisi\n";

    if (x<=y&&x<=z)
        cout <<"Segitiga sama kaki\n";

    if (g>=f&&g>=h)
        cout <<"Segitiga sembarang\n";

    return 0;
    }
