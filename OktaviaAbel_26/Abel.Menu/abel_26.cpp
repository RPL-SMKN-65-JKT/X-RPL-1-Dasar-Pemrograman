#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

#define ppn 0.10 //PPN = 10%
const int diskon = 25000;

int main(){
	char nama[50], menu[20], back;
	int jumlah, makanan, makan, total, bayar, kurang, bonus, pajak, kembalian, harga[5]={27300, 15000, 10000, 25500, 7500}, i=0;
	bool saldo;

	do{
		system("CLS");
		cout<<"====================================== KFC =============================="<<endl;
		cout<<"============================ Kentucky Fried Chicken ====================="<<endl;
		cout<<"==================== Fast Food Kalimalang  || Jagonya Ayam ! ============"<<endl;
		cout<<endl;
		cout<<"Masukkan Nama Anda : " ; cin>>nama;
		cout<<"Pilihan menu yang tersedia---"<<endl;
		cout<<"--------------------------------------------------------------------------"<<endl;
		cout<<"|	[1] Super Mantap           = Rp 27.300                           |"   <<endl;
		cout<<"|	[2] O.R Burger             = RP 15.000                           |"   <<endl;
		cout<<"|	[3] Strawberry Sunday      = RP 10.000                           |"   <<endl;
		cout<<"|	[4] Wingers Combo          = Rp 25.500                           |"   <<endl;
		cout<<"|	[5] Pudding                = Rp 7.500                            |"   <<endl;
		cout<<"--------------------------------------------------------------------------"<<endl;

		cout<<"			(Masukkan Menu Makanan berdasarkan Nomor)"<<endl;
		cout<<" Silahkan Pilih Makanan anda : "; cin >> makanan;

		//Percabangan
		switch(makanan){
			case 1:
				strcpy(menu,"Super Mantap");
				break;
			case 2:
				strcpy(menu,"O.R Burger");
				i=1;
				break;
			case 3:
				strcpy(menu,"Strawberry Sunday");
				i=2;
				break;
			case 4:
				strcpy(menu,"Wingers Combo");
				i=3;
				break;
			case 5:
				strcpy(menu,"Pudding");
				i=4;
				break;
			default:
				cout << "Pilihan menu yang anda pilih tidak tersedia..." << endl;
				goto ulang;
		}

		cout<<"	Anda memilih " << menu <<endl;
		cout<<endl;
		cout<<"Jumlah makanan yang dibeli : ";cin>> jumlah;

		makan = jumlah * harga[i];
		pajak   = makan * ppn;
		total   = pajak + makan;
		cout << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << "|  	          KFC Kalimalang                       |" << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << "\tNama Pemesan          : "	<< nama     <<endl;
		cout << "\tMenu Makanan          : "	<< menu     <<endl;
		cout << "\tJumlah Makanan        : "	<< jumlah   <<" porsi" <<endl;
		cout << "\tHarga Makanan         : "	<< harga[i] << " * "   << jumlah << endl;
		cout << "\tPajak Restaurant      : "	<< pajak    <<endl;
		cout << "\tTotal Pembayaran      : Rp " << total    <<endl;

		if(jumlah>=4){
			bonus = total - diskon;
			total = bonus;
			cout << endl;
			cout << "# Anda mendapatkan diskon Potongan Harga : Rp " << diskon <<" #"<< endl;
			cout << "Total Pembayaran Setelah diskon  : Rp "<< total << endl;
		}

		cout << "--------------------------------------------" << endl;
		cout << "Silahkan bayar disini 		 : Rp."; 		cin>>bayar;
		cout << endl;

		//Perulangan
		while (saldo=bayar<total){
			cout << "Saldo anda kurang, Silahkan bayar lagi : Rp. "; cin>>kurang;
			bayar+=kurang;
		};

		kembalian=bayar-total;
		cout << "Uang yang anda bayar \t\t\t Rp. " << bayar<<endl;
		cout << "Uang kembalian \t\t\t\t Rp. "     << kembalian <<endl;
		cout << "##################################################"<<endl;

		ulang:
			cout << "			[Y = ya / T = tidak]"<<endl;
			cout << "		Apakah anda ingin memesan lagi ? [Y/T]  =  "; cin>>back;
		}while (back=='Y'||back=='y');
		cout << endl;
		cout << "		Terima kasih telah Memesan Makanan di KFC"<<endl;
		cout << "			Selamat Menikmati"<<endl;

		return 0;
	}
