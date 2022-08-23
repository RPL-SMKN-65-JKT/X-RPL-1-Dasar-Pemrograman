#include <iostream>

using namespace std;

int main()
{
    int x;

    cout <<"Tulis tahun: ";
    cin >> x;



    if (x % 4 ==0)  {
       cout <<"Tahun kabisat"<<endl;
    }

   else
    cout <<"Bukan tahun kabisat"<<endl;


    return 0;
}
