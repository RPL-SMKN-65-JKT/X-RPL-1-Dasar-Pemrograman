#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main(){
    int pil;
    float p,l,s,r,a,t,lu;

    cout<<"KUMPULAN BANGUN DATAR \n";
    cout<<"===================== \n";
    cout<<"1. PERSEGI \n";
    cout<<"2. PERSEGI PANJANG \n";
    cout<<"3. LINGKARAN \n";
    cout<<"4. JAJAR GENJANG \n";
    cout<<"5. SEGITIGA \n";
    cout<<"MASUKAN PILIHAN ANDA [1..5] :";
    cin>>pil;
    switch(pil){
        case 1:
        cout<<"PROGRAM PILIHAN-PERGSEGI \n";
        cout<<"++++++++++++++++++++++++ \n";
        cout<<"Masukan Sisi : ";
        cin>>s;
        lu=s * s;
        break;

        case 2:
        cout<<"PROGRAM PILIHAN-PERGSEGI PANJANG \n";
        cout<<"++++++++++++++++++++++++++++++++ \n";
        cout<<"Masukan Panjang : ";
        cin>>p;
        cout<<"Masukan Lebar   : ";
        cin>>l;
        lu=p * l;
        break;

        case 3:
        cout<<"PROGRAM PILIHAN-LINGKARAN \n";
        cout<<"+++++++++++++++++++++++++ \n";
        cout<<"Masukan Jari jari : ";
        cin>>r;
        lu=3.14 * r * r;
        break;

        case 4:
        cout<<"PROGRAM PILIHAN-JAJAR GENJANG \n";
        cout<<"+++++++++++++++++++++++++++++ \n";
        cout<<"Masukan Alas   : ";
        cin>>a;
        cout<<"Masukan Tinggi : ";
        cin>>t;
        lu=a * t;
        break;

        case 5:
        cout<<"PROGRAM PILIHAN-SEGITIGA \n";
        cout<<"+++++++++++++++++++++++++++++ \n";
        cout<<"Masukan Alas   : ";
        cin>>a;
        cout<<"Masukan Tinggi : ";
        cin>>t;
        lu=a * t /2;
        break;

        default :
        cout<<"MAAF, KODE SALAH \n";
        lu=0;
        break;
}
    cout<<"--------------------------\n";
        cout<<"LUAS = "<<lu<<endl;
        cout<<"--------------------------\n";


return 0;
}
