#include <iostream>
using namespace std;
int main(){
    system ("color B0");

     //ARRAY SATU DIMENSI//
     int nilai[ ]={13,17,24,48,65,71,79,84,96,99};
     int jml_arry=sizeof(nilai)/sizeof(*nilai);
        cout<<"============================="<<endl;
        cout<<"     - KJR 3 | X RPL 1 -"<<endl;
        cout<<"============================="<<endl;

     for(int a=0; a<jml_arry; a++){
          cout<<" Isi nilai urutan ke "<<a<<" = "<<nilai[a]<<endl;
     }
return 0;
}
