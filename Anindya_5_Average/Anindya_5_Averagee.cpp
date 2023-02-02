#include <iostream>
using namespace std;
int main() {

    int N;
    int X;
    int i=1;
    int Sum=0;
    float AV;

    cout << "Enter the numbers of data:" <<endl;
    cin >> N;

    while(i<=N){
        cout << " Enter number:" <<endl;
        cin >> X;
        i++;
        Sum=Sum+X;

    }
    AV=Sum/N;
    cout <<"Average:" << AV <<endl;
    return 0;

}
