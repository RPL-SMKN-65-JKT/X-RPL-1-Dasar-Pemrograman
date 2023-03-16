#include <iostream>
using namespace std;

int main(){
    int jml_arr;
    string daerah[] ={"bandung","semarang","jakarta","bali","jogja"};
        jml_arr =sizeof(daerah)/sizeof(*daerah);
        cout<<"============================="<<endl;
        cout<<" [ KaleaIdzni - X RPL 1 ]"<<endl;
        cout<<"============================="<<endl;

   for(int a = 0; a < jml_arr; a++){ //initialization,condition,increment
        cout << daerah[a] << endl; //statsment
    }

}
