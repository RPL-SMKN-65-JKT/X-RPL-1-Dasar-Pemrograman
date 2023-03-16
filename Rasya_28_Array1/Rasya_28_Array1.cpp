#include<iostream>
using namespace std;

int main(){
    int jml_arr; // statment atau type data dan variabe;
    int harga[]= {20000,18000,25000,19000,30000,28000,30000 };// statment atau type data dan varaibel
    jml_arr = sizeof(harga)/sizeof(*harga); // condition
    cout<<"Daftar Harga Sandal Bekas Kampung Melayu"<<endl;

    for (int a = 0; a< jml_arr; a++){ // initialization,condition,increment
        cout<<harga[a]<<endl;//statment
    }
}
