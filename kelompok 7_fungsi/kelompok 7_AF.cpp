#include<iostream>
using namespace std;

int hasil(){ //penulisan fungsi tanpa parameter
        int p,l,t; //penulisan type data
        cout<<"masukkan p: "; cin>>p; //memasukan value dalam program
        cout<<"masukkan l: "; cin>>l;
        cout<<"masukkan t: "; cin>>t;
        return (p*l*t); //memunculkan hasil dari value yg sudah di input

}
int main(){ //penulisan fungsi pada main program
    int p,l,t;
    cout<<hasil();
}

