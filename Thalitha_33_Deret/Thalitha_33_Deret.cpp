#include <iostream>
using namespace std;
int main() {

    int N;
    int i;
    int sum=0;

    cin>> N;
    for (i=1;i<=N;i++) {
        sum=sum+i;
        cout<< sum <<endl;
    }
}
