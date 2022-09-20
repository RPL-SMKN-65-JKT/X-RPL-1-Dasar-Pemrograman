#include <iostream>
#include <string>
using namespace std;

int main(){

	//deklarasi variabel

	int pilih[100],jumlah[100],sub_total[100],harga[100];
	string menu[100];
	int total_bayar;
	int i=0;
	bool selesai=false;


	cout<<"*********DAFTAR MENU MAKANAN & MINUMAN YOHA(YOUTH HANGOUT)***********"<<endl;
    cout<<"1. Crafel                                        Rp. 15000"<<endl;
    cout<<"2. Waffle                                        Rp. 15000"<<endl;
    cout<<"3. Ice Cream                                     Rp. 4000"<<endl;
    cout<<"4. Milo                                          Rp. 8000"<<endl;
    cout<<"--------------------------------------------------------------"<<endl;

	cout<<"Tekan 0 jika selesai melakukan pemesanan"<<endl<<endl;

    while(selesai==false){

    	cout<<"Pilih Menu : ";
    	cin>>pilih[i];

    	if (pilih[i]<=4){

    		if (pilih[i]==0){
    			selesai=true;
			}else {
				switch (pilih[i]){
		    		case 1 : menu[i]="Crafel                "; harga[i]= 15000; break;
		    		case 2 : menu[i]="Waffle                "; harga[i]= 15000; break;
		    		case 3 : menu[i]="Ice Cream             "; harga[i]= 4000; break;
		    		case 4 : menu[i]="Milo                  "; harga[i]= 8000; break;
		    		default : menu[i]="";harga[i]=0;
				}

				cout<<"Jumlah Porsi "<<menu[i]<<" : ";
		    	cin>>jumlah[i];
		    	cout<<endl;

		    	sub_total[i]=jumlah[i]*harga[i];

		    	total_bayar+=sub_total[i];
	    		i++;
			}
		} else {
			cout<<"Menu yang dipilih tidak sesuai"<<endl;
			cout<<endl;
		}

	}

	cout<<endl;
	cout<<"                 INVOICE PEMBELIAN YOHA(YOUTH HANGOUT)"<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"No	Nama Menu    	  	Harga		Jumlah        Sub Total "<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	for (int a=0;a<i;a++){
		  cout<<a+1<<"	"<<menu[a]<<"	"<<harga[a]<<"		"<<jumlah[a]<<"		"<<sub_total[a]<<endl;
	}

	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"Total Bayar = Rp."<<total_bayar<<endl;


}
