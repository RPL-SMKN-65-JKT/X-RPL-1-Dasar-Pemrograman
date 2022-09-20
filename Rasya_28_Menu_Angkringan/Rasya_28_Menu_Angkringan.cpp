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


	cout<<"================DAFTAR MAKANAN DAN MINUMAN ANGKRINGAN PKJ IV============== "<<endl;
    cout<<"1. Sosis Bakar	 Rp. 3000"<<endl;
    cout<<"2. Bakso Bakar	 Rp. 3000"<<endl;
    cout<<"3. Nasi Kucing 	 Rp. 5000"<<endl;
    cout<<"4. Sate Usus     Rp. 2000"<<endl;
    cout<<"5. Susu Jahe	 Rp. 7000"<<endl;
    cout<<"7. ES Teh Manis  Rp. 3000"<<endl;
    cout<<"8. Nutrisari     Rp. 5000"<<endl;
    cout<<"--------------------------------------------------------------"<<endl;

	cout<<"Tekan 0 jika selesai melakukan pemesanan"<<endl<<endl;

    while(selesai==false){

    	cout<<"Pilih Menu : ";
    	cin>>pilih[i];

        if (pilih[i]<=8){

    		if (pilih[i]==0){
    			selesai=true;
			}else {
				switch (pilih[i]){
		    		case 1 : menu[i]="Sosis Bakar      "; harga[i]=3000; break;
		    		case 2 : menu[i]="Bakso Bakar      "; harga[i]=3000; break;
		    		case 3 : menu[i]="Nasi Kucing      "; harga[i]=5000; break;
		    		case 4 : menu[i]="Sate Usus        "; harga[i]=2000;break;
		    		case 5 : menu[i]="Susu Jahe        "; harga[i]=7000;break;
		    		case 6 : menu[i]="Good Day         "; harga[i]=5000;break;
		    		case 7 : menu[i]="ES Teh Manis     "; harga[i]=3000;break;
		    		case 8 : menu[i]="Nutrisari        "; harga[i]=5000;break;
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
	cout<<"                 INVOICE PEMBELIAN ANGKRINGAN PKJ IV"<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"No	Nama Menu    	  	Harga		Jumlah        Sub Total "<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	for (int a=0;a<i;a++){
		  cout<<a+1<<"	"<<menu[a]<<"	"<<harga[a]<<"		"<<jumlah[a]<<"		"<<sub_total[a]<<endl;
	}

	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"Total Bayar = Rp."<<total_bayar<<endl;


}
