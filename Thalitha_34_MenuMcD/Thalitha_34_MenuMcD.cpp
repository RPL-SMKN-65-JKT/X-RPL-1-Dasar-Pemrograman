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


	cout<<"*********DAFTAR MENU MAKANAN & MINUMAN McDonald's***********"<<endl;
    cout<<"1. McChicken				Rp. 34000"<<endl;
    cout<<"2. McNugget				Rp. 32000"<<endl;
    cout<<"3. Cheeseburger			Rp. 31000"<<endl;
    cout<<"4. Chicken Burger	    Rp. 31000"<<endl;
    cout<<"5. PaNas 1               Rp. 25000"<<endl;
    cout<<"6. PaNas 2               Rp. 35000"<<endl;
    cout<<"7. Fanta                 Rp. 8000"<<endl;
    cout<<"8. Coca Cola             Rp. 8000"<<endl;
    cout<<"--------------------------------------------------------------"<<endl;

	cout<<"Tekan 0 jika selesai melakukan pemesanan"<<endl<<endl;

    while(selesai==false){

    	cout<<"Pilih Menu : ";
    	cin>>pilih[i];

    	if (pilih[i]<=4,7){

    		if (pilih[i]==0){
    			selesai=true;
			}else {
				switch (pilih[i]){
		    		case 1 : menu[i]="McChicken       "; harga[i]=34000; break;
		    		case 2 : menu[i]="McNugget        "; harga[i]=32000; break;
		    		case 3 : menu[i]="Cheeseburger    "; harga[i]=31000; break;
		    		case 4 : menu[i]="Chicken Burger  "; harga[i]=31000; break;
		    		case 5 : menu[i]="PaNas 1         "; harga[i]=25000; break;
		    		case 6 : menu[i]="PaNas 2         "; harga[i]=35000; break;
		    		case 7 : menu[i]="Fanta           "; harga[i]=8000; break;
		    		case 8 : menu[i]="Coca Cola       "; harga[i]=8000; break;
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
	cout<<"                 INVOICE PEMBELIAN McDonald's"<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"No	Nama Menu    	  	Harga		Jumlah        Sub Total "<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	for (int a=0;a<i;a++){
		  cout<<a+1<<"	"<<menu[a]<<"	"<<harga[a]<<"		"<<jumlah[a]<<"		"<<sub_total[a]<<endl;
	}

	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"Total Bayar = Rp."<<total_bayar<<endl;


}
