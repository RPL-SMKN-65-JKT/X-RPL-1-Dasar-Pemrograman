#include<iostream>
using namespace std;
int main ()
{
    cout<<"============Program menghitung gaji bulanan==============";
    cout<< endl;

    string nama;
    char jabatan;
    int gaji;

    //proses input//
    cout<<"Nama pegawai :";
    cin>>(nama);

    cout<<"Jabatan :";
    cin>>(jabatan);

    cout<<"Total gaji :";
    cin>>gaji;

    //tentukan total gaji
     switch ('total gaji'){
        case 1:
            cout <<"gaji_bersih_perhari=200000" <<endl;
            break;
        case 2:
            cout <<"uang_makan=50000" << endl;
            break;
        case 3:
            cout <<"uang_transportasi=20000" << endl;
            break;
        }
        'Total_gaji = gaji_bersih_perbulan + uang_makan + uang_transportasi';

        //proses output//
        cout<< endl;
        cout<< nama << "Menerima gaji Rp."<< 200000*30 + 50000*30 + 20000*30 << "Perbulan" <<endl;



 return 0;
}
