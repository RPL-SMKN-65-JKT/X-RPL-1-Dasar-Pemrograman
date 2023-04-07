#include <iostream>
#include<conio.h>
using namespace std;

    void memberi_salam(){
        cout << "  Hallo selamat datang di program rata rata menggunakan array\n";
    }

    //Aasalamualaikum ibu, ini saya buat sendiri maaf kata jika ada kesamaan dengan yang lain

    int main(){
        memberi_salam();
    int n, jumlah, i;
    char ulang;
    float rata;

    do{
    cout << " Masukan panjang array yang kalian inginkan: ";
    //memasukan panjang array sesuai yang di inginkan
    cin>>n;
    cout << "========================================================="<<endl;
    cout << " Masukan nilai array yang kalian inginkan:  "<< endl;
    //memasukan nilai array
    int a[n];
    for(int i=0;i<n;i++){
            //menampilkan nilai data
        cout << " Masukkan data pada elemen ke "<<i+1<<" = ";cin>>a[i];
    }

    cout<<endl;
    //Menampilkan nilai data
    for(int i=0;i<n;i++){
        cout << " Data baris ke- "<<i+1<<" = "<<a[i];cout<<endl;
    }
    cout << endl;
    //total
    float total=0;
    for(i=0;i<n;i++){
    total = total+a[i];
  }
    cout<<" Semua Total nilai didalam array"<<endl;
    cout << total;
    cout << endl;

    rata = (total/n);
    cout << " panjang array rata-rata atau pembagian rata rata nya adalah "<< n <<endl;
    cout << " Rata ratanya adalah: " << rata;

    cout << endl;
    cout << "================================================================================="<<endl;
    cout << "Apakah anda ingin mengulang program ini? [y/t]"<<endl;
        cin>>ulang;
        //perulangan
    }while(ulang != 't');

    return 0;

    //UmarMUKHTAR
    getch();
}
