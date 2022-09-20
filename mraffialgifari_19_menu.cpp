#include <iostream>
using namespace std;

int main() {

 int pilih,jumlah,B;
 int harga1,harga2,harga3,bayar1,bayar2,bayar3;
 string y,t;

 cout<<"=====|SLICE OF LIFE|====="<<endl<<endl;
 cout<<"Daftar Menu     HARGA  "<<endl<<endl;
 cout<<"1.beef toast bread  Rp35.000 "<<endl;
 cout<<"2.sweet choclate toast bread          Rp32.000 "<<endl;
 cout<<"3.rendang toast bread  Rp35.000  "<<endl<<endl;

 do{
 cout<<"Daftar Menu : ";
 cin>>pilih;

 if (pilih==1){
 cout<<"anda memesan sweet chocolate toast bread"<<endl;
 cout<<"anda ingin pesan berapa : ";
 cin>>jumlah;
 harga1=32000;
 bayar1=jumlah*harga1;
 cout<<"total pembayaran anda adalah : "<<bayar1<<endl;
 cout<<"apakah anda ingin memesan menu lain (1:y/2:t) = ";
 cin>>B;
 cout<<endl;
}
 else if (pilih==2){
 cout<<"anda memesan beef toast bread"<<endl;
 cout<<"anda ingin pesan berapa : ";
 cin>>jumlah;
 harga2=35000;
 bayar2=jumlah*harga2;
 cout<<"total pembayaran anda adalah : "<<bayar2<<endl;
 cout<<"apakah anda ingin memesan menu lain (1:y/2:t) = ";
 cin>>B;
 cout<<endl;
}
 else if (pilih==3){
 cout<<"anda memesan rendang toast bread"<<endl;
 cout<<"anda ingin pesan berapa : ";
 cin>>jumlah;
 harga3=35000;
 bayar3=jumlah*harga3;
 cout<<"total pembayaran anda adalah : "<<bayar3<<endl;
 cout<<"apakah anda ingin memesan menu lain (1:y/2:t) = ";
 cin>>B;
 cout<<endl;
}


}

 while (B!=2);
 cout<<"Terima Kasih Atas Kepercayaan Anda Terhadap Kami ";
 return 0;
}
