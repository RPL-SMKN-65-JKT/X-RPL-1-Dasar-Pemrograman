#include<iostream>
#include <string>

using namespace std;

int main()
{
    int a,b,c,pil,KLL;
    char nilai,jawaban,pilihan;
    float hasil;
    string operasi;

    cout <<"Masukan Semua Sisi Segitiga!"<< endl;
    cout <<"============================"<< endl;
    cout <<"sisi A : ";
    cin >> a;

    cout <<"sisi B : ";
    cin >> b;

    cout <<"sisi C : ";
    cin >> c;
    cout <<"============================"<< endl;

    if(a==b && a==c)
    {
        cout<<"Segitiga Sama Sisi"<<endl;
    }
    else if(a==b || a==c)
    {
        if(a!=b || a!=c)
        {
            cout<<"Segitiga Sama Kaki"<<endl;
        }
    }
    else
    cout<<"Segitiga sembarang"<<endl;

    cout<<"============================"<<endl;
    cout << " keliling segitiga tersebut adalah " << endl;
    system("pause");

    KLL=a+b+c; //rumus menghitung keliling segitiga

        cout<<"-----------------------------"<<endl;
        cout << "keliling nya adalah" << endl;
	cout<<"Keliling segtiga = "<<KLL<<endl;
	cout<<"-----------------------------"<<endl;


            {
                cout << "==============================================================" << endl;
                cout << "Berikut adalah penjelasan tentang segitiga" << endl;
                cout << "pilih (1) untuk melihat penjelasan segitiga sama sisi" << endl;
                cout << "pilih (2) untuk melihat penjelasan segitiga sama kaki" << endl;
                cout << "pilih (3) untuk melihat penjelasan segitiga sembarang" << endl;
                 cout << "=============================================================" << endl;
            }
        cin >> pilihan;
                switch (toupper(pilihan)){
            case '1':
                cout << "segitiga sama sisi adalah suatu segitiga dengan tiga sisi yang sama panjang" << endl;
                cout << "Di mana ketiga sudutnya sama-sama 60 derajat sekaligus memiliki tiga sumbu simetri" << endl;
            break;
            case '2':
                cout << "Segitiga sama kaki merupakan segitiga dengan dua sisi yang sama panjang. " << endl ;
            break;
            case '3':
            cout << "Segitiga sembarang (scalene triangle) adalah segitiga yang panjang sisinya tidak ada yang sama satu sama lain." << endl;

            }
                        cout << "==========================================================================================================" << endl;
                        cout<< "Oke,sampai disini dulu ya... ,Terima kasih semuanya,saya Umar Mukhtar akan mengakhiri projet ini. " << endl;
                        cout << "Wasallamulalaikum Warahmatullahi Wabarakatuh. " <<endl;
    return 0;
}
