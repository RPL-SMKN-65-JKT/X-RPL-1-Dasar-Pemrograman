#include <iostream>
using namespace std;

int main(){
    int jml_arr;
    string jurusan [] ={"RPL","MM","PFTV"}; //membuat array
        jml_arr =sizeof(jurusan)/sizeof(*jurusan); //mengambil isi array
        cout<<"============================="<<endl;
        cout<<" [ Thalitha.NA - X RPL 1 ]"<<endl;
        cout<<"============================="<<endl;

   for(int a = 0; a < jml_arr; a++){ //initialization,condition,increment
        cout << jurusan[a] << endl; //statsment
    }

}
