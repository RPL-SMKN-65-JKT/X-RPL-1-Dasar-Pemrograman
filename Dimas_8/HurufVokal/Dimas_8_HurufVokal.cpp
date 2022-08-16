#include <iostream>

using namespace std;

int HurufVokal()
{
    char cc;

    cout<<"Masukan Huruf: ";
    cin>>cc;

        if (cc=='a' || cc=='i' || cc=='u' || cc=='e' || cc=='o')
            {
            cout<<"Huruf Vokal";
            }

    return 0;
}
