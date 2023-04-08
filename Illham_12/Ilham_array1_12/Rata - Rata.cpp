#include <iostream>
using namespace std;

int main (){
    system("color 09");
    int nilai,total,rata;
    //masukkan integer nilai,total,rata yang diingin cari
    int jumlah;
    //lalu integer jumlah untuk memilih jumlah berapapun
    cout<<"masukkan jumlah nilai: ";
    cin>>jumlah;
    //bikin akhir cin lalu dilanjutkan dengan cout<<endl; supaya tidak error saat dalam run
    cout<<endl;

for(int i= 1; i<=jumlah ; i++){
    cout<<"masukkan angka:";
    //sesuaikan dengan nilai yang kalian pilih
    cin >>nilai;
    total = total+nilai;
    //jangan lupa masukkan total lalu dijumlahkan dengan nilai hasil yang tadi dihasilkan
}
    cout<<endl;
    cout<<"total:" <<total<<endl;
    //disini akan menentukan total semua hasil dari nilai tersebut
    rata= total/jumlah;
    //jika sudah tahu hasil total nilainya maka dibagi dengan jumlah yg diinginkan
    cout<<"rata ratanya:" <<rata;
    //maka hasilnya akan muncul
return 0;
//tamat
}

