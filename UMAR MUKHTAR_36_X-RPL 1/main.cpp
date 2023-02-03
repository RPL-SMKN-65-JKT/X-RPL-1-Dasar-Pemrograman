#include <iostream>
using namespace std;

int main()
{
    int n, i, x, sum;
    float avere;

    cin >>n;
    sum = 0;
    i=1;
    while(i<=n){
        cout<< "masukan" <<endl;
        cin >> x;
        i++;
        sum = sum+x;

    }
    avere = sum/n;
    cout<< "rata rata ="<<avere << endl;
}
