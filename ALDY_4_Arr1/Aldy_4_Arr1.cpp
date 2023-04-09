#include <iostream>
using namespace std;

int main(){
    system ("color b");

    int i, j, data[100];
    float rata,jum;

    cout << "Menghitung Nilai Rata-rata Pada Array" << endl;
    cout << "=====================================" << endl;
    cout << "Banyaknya Nilai Data = ";
    cin>>j;
    cout <<endl;

    for(i=0; i<j; i++)
       {
           cout <<"Data Ke-" << i+1 <<" = ";
           cin >> data[i];
           jum += data[i];

       }
    rata=jum/j;

    cout << endl;
    cout << "Nilai total adalah = "<<jum<<endl;
    cout << "Nilai Rata-rata adalah = "<<rata<<endl;

    return 0;
}
