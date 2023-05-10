#include <conio.h>
#include <iostream>
using namespace std;

int Pengurangan(int a, int b)
{
    int hasil=a-b;
    return hasil;
}

int main()
{
    cout<<"selisih umur nashwa dan Ilham adalah = "<<endl;cout<<Pengurangan(15,17)<<endl;
    getch();
}
