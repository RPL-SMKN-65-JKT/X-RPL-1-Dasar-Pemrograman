#include <iostream>
using namespace std;

int main(){
    char a,b;
    int jml_index;
    cout << "Masukkan Jumlah Data = ";
    cin >> jml_index;

    float nilai[jml_index], total, rerata;
    for(int a = 0; a < jml_index; a++){
        cout <<"Data ke-"<<a<<" = ";
        cin >> nilai[a];
    }
    for(int b = 0; b < jml_index; b++){
        total += nilai[b];
    }
    cout <<"Total Nilai = "<<total<< endl;
    rerata = total/jml_index;
    cout<<"Rata Rata  = "<<rerata<<endl;
}
