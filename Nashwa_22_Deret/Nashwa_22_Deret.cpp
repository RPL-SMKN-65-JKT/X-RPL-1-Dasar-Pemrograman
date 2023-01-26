#include <iostream>

using namespace std;

int main()
{
    int f;
    int X;
    int sum = 0;

    cout << "pilih jumlah f: ";
    cin >> f;

    for(X=1; X < f; X++){
        sum = sum + X;
        cout << sum << endl;
    }


    return 0;
}
