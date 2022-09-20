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

    cout <<"=================DAFTAR MENU MARTABAK ORINS===================="<< endl;
    cout <<"1.  Coklat Kacang                            Rp.32000"<<endl;
    cout <<"2.  Coklat Keju                              Rp.35000"<<endl;
    cout <<"3.  Keju Spesial                             Rp.40000"<<endl;
    cout <<"4.  Strawberry                               Rp.30000"<<endl;
    cout <<"5.  Blueberry                                Rp.30000"<<endl;
    cout <<"6.  Coklat                                   Rp.28000"<<endl;
    cout <<"7.  Keju Coklat Kacang                       Rp.40000"<<endl;
    cout <<"8.  Greentea Keju                            Rp.35000"<<endl;
    cout <<"9.  Kacang coklat wijen                      Rp.40000"<<endl;
    cout <<"10. Oreo keju                                Rp.35000"<<endl;
    cout <<"11. Ovomaltine                               Rp.32000"<<endl;
    cout <<"12. Ovomaltine Keju                          Rp.35000"<<endl;
    cout <<"13. Greentea                                 Rp.35000"<<endl;
    cout <<"14. Nutella                                  Rp.37000"<<endl;
    cout <<"15. Nutella Keju                             Rp.40000"<<endl;
    cout<<"--------------------------------------------------------------"<<endl;

	cout<<"Tekan 0 jika selesai melakukan pemesanan"<<endl<<endl;

    while(selesai==false){

    	cout<<"Pilih Menu : ";
    	cin>>pilih[i];

    	if (pilih[i]<=15){

    		if (pilih[i]==0){
    			selesai=true;
			}else {
				switch (pilih[i]){
		    		case 1 : menu[i]="Coklat Kacang      "; harga[i]=32000; break;
		    		case 2 : menu[i]="Coklat Keju        "; harga[i]=35000; break;
		    		case 3 : menu[i]="Keju Spesial       "; harga[i]=40000; break;
		    		case 4 : menu[i]="Strawberry         "; harga[i]=30000; break;
		    		case 5 : menu[i]="Blueberry          "; harga[i]=30000; break;
		    		case 6 : menu[i]="Coklat             "; harga[i]=28000; break;
		    		case 7 : menu[i]="Keju Coklat Kacang "; harga[i]=40000; break;
		    		case 8 : menu[i]="Greentea Keju      "; harga[i]=35000; break;
		    		case 9 : menu[i]="Kacang coklat wijen"; harga[i]=40000; break;
		    		case 10: menu[i]="Oreo Keju          "; harga[i]=35000; break;
		    		case 11: menu[i]="Ovomaltine         "; harga[i]=32000; break;
		    		case 12: menu[i]="Ovomaltine Keju    "; harga[i]=35000; break;
		    		case 13: menu[i]="Greentea           "; harga[i]=35000; break;
		    		case 14: menu[i]="Nutella            "; harga[i]=37000; break;
		    		case 15: menu[i]="Nutella Keju       "; harga[i]=40000; break;
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
	cout<<"                 INVOICE PEMBELIAN MARTABAK ORINS"<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"No	Nama Menu    	  	Harga		Jumlah        Sub Total "<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	for (int a=0;a<i;a++){
		  cout<<a+1<<"	"<<menu[a]<<"	"<<harga[a]<<"		"<<jumlah[a]<<"		"<<sub_total[a]<<endl;
	}

	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"Total Bayar = Rp."<<total_bayar<<endl;


}
