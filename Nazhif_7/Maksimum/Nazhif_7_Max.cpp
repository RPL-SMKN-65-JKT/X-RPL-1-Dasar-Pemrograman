#include <iostream>

using namespace std;

int main()
{

    int a,b;

    cout << "Masukan Bilangan: \n";
    cin >> a,b;

    if (a>b) {
        cout << "Bilangan Terbesar: " << a << endl;
    }
    else {
        cout << "Bilangan Terbesar: " << b << endl;
    }

    return 0;
}
