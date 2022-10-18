#include <iostream>
#include <string>
using namespace std;

int main(){


	int pilih[100],jumlah[100],sub_total[100],harga[100];
	string menu[100];
	int total_bayar;
	int i=0;
	bool selesai=false;


	cout<<"*********DAFTAR MENU CHATIME*********"<<endl;
    cout<<"1.   Hazelnut Milk Tea   Rp.  27000"<<endl;
    cout<<"2.   Cappucino           Rp.  25000"<<endl;
    cout<<"3.   Roasted Tea         Rp.  23000"<<endl;
    cout<<"4.   Brown Sugar         Rp.  27000"<<endl;
    cout<<"5.   Matcha Tea          Rp.  26000"<<endl;
    cout<<"6.   Chocolate Mousse    Rp.  30000"<<endl;
    cout<<"7.   Mango Smoothie      Rp.  26000"<<endl;
    cout<<"-----------------------------------------------"<<endl;

	cout<<"Tekan 0 jika selesai melakukan pemesanan"<<endl<<endl;

    while(selesai==false){

    	cout<<"Pilih Menu : ";
    	cin>>pilih[i];

    	if (pilih[i]<8){

    		if (pilih[i]==0){
    			selesai=true;
			}else {
				switch (pilih[i]){
		    		case 1 : menu[i]="Hazelnut Milk Tea  "; harga[i]=27000; break;
                    case 2 : menu[i]="Capppucino         "; harga[i]=25000; break;
                    case 3 : menu[i]="Roasted Tea        "; harga[i]=23000; break;
                    case 4 : menu[i]="Brown Sugar        "; harga[i]=27000; break;
                    case 5 : menu[i]="Matcha Tea         "; harga[i]=26000; break;
                    case 6 : menu[i]="Chocolate Mousse   "; harga[i]=30000; break;
                    case 7 : menu[i]="Mango Smoothie     "; harga[i]=26000; break;
                    default : menu[i]="";harga[i]=0;
				}

				cout<<"Jumlah Pesanan "<<menu[i]<<" : ";
		    	cin>>jumlah[i];
		    	cout<<endl;

		    	sub_total[i]=jumlah[i]*harga[i];

		    	total_bayar+= sub_total[i];
	    		i++;
			}
		} else {
			cout<<"Menu yang dipilih tidak sesuai"<<endl;
			cout<<endl;
		}

	}

	cout<<endl;
	cout<<"                 INVOICE PEMBELIAN CHATIME"<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"No	Nama Menu    	  	Harga		Jumlah        Sub Total "<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	for (int a=0;a<i;a++){
		  cout<<a+1<<"	"<<menu[a]<<"	"<<harga[a]<<"		"<<jumlah[a]<<"		"<<sub_total[a]<<endl;
	}

	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"Total Bayar = Rp."<<total_bayar<<endl;


}
