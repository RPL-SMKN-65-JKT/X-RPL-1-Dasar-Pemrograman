#include <iostream>

using namespace std;

int main()
{
    int tahun;

    cout<<("Masukan Tahun : ");
    cin>>tahun;

    if (tahun%4==0)
    {
        cout<<"tahun kabisat";
    }
    else{
        cout<<"bukan tahun kabisat";
    }



    return 0;
}

