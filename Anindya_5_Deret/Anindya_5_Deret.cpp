#include <iostream>
using namespace std;

int main(){
    int N;
    int i;
    int Sum=0;

    cout<<"Masukkan N:"<<endl;
    cin>>N;
    for(i=1;i<N;i++){
        Sum=Sum+i;
        cout<<Sum<<endl;
    }
        return 0;
}
