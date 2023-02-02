#include <iostream>

using namespace std;

int main()
{
    int N;
    int x;
    int i;
    int sum;
    float avere;
    cout<< "masukan N"<<endl;
    cin >>N;
    sum = 0;
    i=1;
    while(i<=N){
        cout<<"masukan angka"<<endl;
        cin >>x;
        i++;
        sum=sum+x;

    }
    avere = sum/N;
    cout<<"rata rata nya adalah ="<<avere<<endl;

}
