#include <iostream>

using namespace std;

int main(){
    int jml_arr;
    string nama[] = { "Budi","Asep","Koh Aheng","Sakmadik","Marimas","Jokowi","Megawati" };
    jml_arr = sizeof(nama)/sizeof(*nama);

    for(int a=0; a< jml_arr; a++){
        cout << nama[a]<<endl;
    }
}
