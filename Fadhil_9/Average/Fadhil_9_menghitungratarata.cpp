#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    int n,x;
    int sum = 0;
    float av;

    cout << "ketik N: ";
    cin >> n;
    cout << "ketik X: ";
    cin >> x;

    while(i <= n) {
        sum = sum + x;
        i = i + 1;
        cout << x << endl;
    }
    (i > n);
    av = sum/n;
    cout << av << endl;
}
