#include <iostream>
using namespace std;
int main()
{
                int kode, pri, jml, tot, byr, kbl;
                char mad;
                do
                {
                                cout<<"                  YAMIE PANDA                  "<<endl
                                cout<<"           RESTORAN HIDANGAN MIE CHINA         "<<endl;
                                cout<<"             Jl.Cipinang Jaya Raya             "<<endl;
                                cout<<"==============================================="<<endl;
                                cout<<""<<endl;
                                cout<<" _____________________________________________ "<<endl;
                                cout<<"|        Menu Makanan          |      Harga   |"<<endl;
                                cout<<"|---------------------------------------------|"<<endl;
                                cout<<"|   1. Yamie polos asin        |  Rp. 20.000  |"<<endl;
                                cout<<"|   2. Yamie asin tapi manis   |  Rp. 33.800  |"<<endl;
                                cout<<"|   3. Yamie asin ayam kungfu  |  Rp. 40.000  |"<<endl;
                                cout<<"|   4. Yamie asin kriuk        |  Rp. 40.000  |"<<endl;
                                cout<<"|   5. Yamie asin pangsit rebus|  Rp. 40.000  |"<<endl;
                                cout<<"|   6. Pangsit goreng          |  Rp. 18.800  |"<<endl;
                                cout<<"|   7. Pangsit rebus           |  Rp. 18.800  |"<<endl;
                                cout<<"|______________________________|______________|"<<endl;
                                cout<<""<<endl;
                                cout<<"==============================================="<<endl;
                                cout<<"Tulis pilihan anda : ";
                                cin>>kode;
                                 switch (kode)
                                {
                                case 1:
                                cout<<'\n'<<"Yamie polos asin"<<endl;
                                pri=20000;
                                cout<<"Masukan Jumlah Porsi : ";
                                cin>>jml;
                                tot=pri*jml;
                                cout<<"Total Hargany        : Rp. "<<tot<<endl;
                                cout<<"Dibayar              : Rp. ";
                                cin>>byr;
                                kbl=byr-tot;
                                cout<<"Kembali              : Rp."<<kbl<<endl;
                                cout<<""<<endl;
                                cout<<"Masih Ada Yang Lain Y/T : ";
                                cin>>mad;
                                break;

                                case 2:
                                cout<<'\n'<<"Yamie asin tapi manis"<<endl;
                                pri=33800;
                                cout<<"Masukan Jumlah Porsi : ";
                                cin>>jml;
                                tot=pri*jml;
                                cout<<"Total Hargany        : Rp. "<<tot<<endl;
                                cout<<"Dibayar              : Rp. ";
                                cin>>byr;
                                kbl=byr-tot;
                                cout<<"Kembali              : Rp."<<kbl<<endl;
                                cout<<""<<endl;
                                cout<<"Masih Ada Yang Lain Y/T : ";
                                cin>>mad;
                                break;

                                case 3:
                                cout<<'\n'<<"Yamie asin ayam kungfu "<<endl;
                                pri=40000;
                                cout<<"Masukan Jumlah Porsi : ";
                                cin>>jml;
                                tot=pri*jml;
                                cout<<"Total Hargany        : Rp. "<<tot<<endl;
                                cout<<"Dibayar              : Rp. ";
                                cin>>byr;
                                kbl=byr-tot;
                                cout<<"Kembali              : Rp."<<kbl<<endl;
                                cout<<""<<endl;
                                cout<<"Masih Ada Yang Lain Y/T : ";
                                cin>>mad;
                                break;

                                case 4:
                                cout<<'\n'<<"Yamie asin kriuk"<<endl;
                                pri=40000;
                                cout<<"Masukan Jumlah Porsi : ";
                                cin>>jml;
                                tot=pri*jml;
                                cout<<"Total Hargany        : Rp. "<<tot<<endl;
                                cout<<"Dibayar              : Rp. ";
                                cin>>byr;
                                kbl=byr-tot;
                                cout<<"Kembali              : Rp."<<kbl<<endl;
                                cout<<""<<endl;
                                cout<<"Masih Ada Yang Lain Y/T : ";
                                cin>>mad;
                                break;

                                case 5:
                                cout<<'\n'<<"Yamie asin pangsit rebus"<<endl;
                                pri=40000;
                                cout<<"Masukan Jumlah Porsi : ";
                                cin>>jml;
                                tot=pri*jml;
                                cout<<"Total Hargany        : Rp. "<<tot<<endl;
                                cout<<"Dibayar              : Rp. ";
                                cin>>byr;
                                kbl=byr-tot;
                                cout<<"Kembali              : Rp."<<kbl<<endl;
                                cout<<""<<endl;
                                cout<<"Masih Ada Yang Lain Y/T : ";
                                cin>>mad;
                                break;

                                case 6:
                                cout<<'\n'<<"Pangsit goreng"<<endl;
                                pri=18800;
                                cout<<"Masukan Jumlah Porsi : ";
                                cin>>jml;
                                tot=pri*jml;
                                cout<<"Total Hargany        : Rp. "<<tot<<endl;
                                cout<<"Dibayar              : Rp. ";
                                cin>>byr;
                                kbl=byr-tot;
                                cout<<"Kembali              : Rp."<<kbl<<endl;
                                cout<<""<<endl;
                                cout<<"Masih Ada Yang Lain Y/T : ";
                                cin>>mad;
                                break;

                                case 7:
                                cout<<'\n'<<"Pangsit rebus "<<endl;
                                pri=18800;
                                cout<<"Masukan Jumlah Porsi : ";
                                cin>>jml;
                                tot=pri*jml;
                                cout<<"Total Hargany        : Rp. "<<tot<<endl;
                                cout<<"Dibayar              : Rp. ";
                                cin>>byr;
                                kbl=byr-tot;
                                cout<<"Kembali              : Rp."<<kbl<<endl;
                                cout<<""<<endl;
                                cout<<"Masih Ada Yang Lain Y/T : ";
                                cin>>mad;
                                break;
                                default:
                                cout<<"Kode Yang Anda Masukan Tidak Tersedia";
                                }
                }
                while (mad/='Y');
                cout<<"Terima Kasih Atas Kunjungan Anda Di Restoran Yamie Panda";
                return 0;
}
