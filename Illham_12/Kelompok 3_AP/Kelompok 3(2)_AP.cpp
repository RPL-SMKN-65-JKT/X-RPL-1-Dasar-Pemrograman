#include <iostream>
using namespace std;

void LuasPersegi()
{
 int panjang,lebar;

 cout << "panjang nya berapa: "; cin >> panjang;
 cout << "lebar nya berapa: "; cin >> lebar;

 cout<<"Luas nya: " << panjang*lebar;
}

int main()
{
 LuasPersegi();
 return 0;
}
