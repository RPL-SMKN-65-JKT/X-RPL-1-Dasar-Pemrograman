#include <iostream>
using namespace std;

int main(){
    int jml_arr;
    string negara[] ={"Indonesia","Singapura","Canada","Korea","Australia"};
        jml_arr =sizeof(negara)/sizeof(*negara);
        cout<<"============================="<<endl;
        cout<<" [ OKTAFIABEL - X RPL 1 ]"<<endl;
        cout<<"============================="<<endl;

   for(int a = 0; a < jml_arr; a++){ //initialization,condition,increment
        cout << negara[a] << endl; //statsment
    }

}
