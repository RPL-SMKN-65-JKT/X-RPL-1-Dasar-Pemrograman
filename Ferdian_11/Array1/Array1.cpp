#include <iostream>
#include <string>
using namespace std;

int main(){                                                                                     //fungsi utama program
    int jumlah_array;                                                                           //inisialisasi/typedata
    string makanan[] = {"Pizza","Mie","Sate","Rendang","Sushi","Gado-gado","Coklat","Kwetiau"}; //Array string bersama index
    jumlah_array = sizeof(makanan)/sizeof(*makanan);                                            //"sizeof()"digunakan untuk jumlah index dimilik dari array

    for(int x = 0 ; x <jumlah_array; x++){                                                      //inisialisasi,kondisi,increment
        cout<<x <<" = "<<makanan[x]<<endl;                                                            //"cout" digunakan untuk output/input text

    }
return 0;
}
