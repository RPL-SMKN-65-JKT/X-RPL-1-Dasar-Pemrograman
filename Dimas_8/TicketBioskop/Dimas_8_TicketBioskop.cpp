#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    char kursi;

    cout<< "=========================MOVIES=========================" << endl;
    cout<< "===================PEMBELIAN 1 TICKET===================" << endl;
    cout<< " *Sedang Tayang "<< endl;
    cout<< "1.Miracle In Hell "<< endl;
    cout<< "2.Two Peace Blue "<< endl;
    cout<< " *Akan Tayang "<< endl;
    cout<< "0.White Adam "<< endl;
    cout<< "0.Sayap Putus "<< endl;
    cout<< "0.SpiderBoy Homeless "<< endl;
    cout<< "Masukan Nomor Film Yang Ingin Kamu Tonton: ";
    cin>>a;

    if (a==1)
        {
            cout<< "========================================================" << endl;
            cout<<" *Miracle In Hell -- Pilih Jam"<<endl;
            cout<<"1.12:00"<<endl;
            cout<<"2.14:00"<<endl;
            cout<<"3.16:00"<<endl;
            cout<<"4.20:00"<<endl;
            cout<<"Masukan Nomor Jam Tayang: ";
            cin>>b;

            if(b==1)
            {
                cout<< "========================================================" << endl;
                cout<<" *12:00 -- Pilih Kursi"<<endl;
                cout<<"1.A1"<<endl;
                cout<<"2.A2"<<endl;
                cout<<"3.A3"<<endl;
                cout<<"4.A4"<<endl;
                cout<<"5.A5"<<endl;
                cout<<"6.A6"<<endl;
                cout<<"7.A7"<<endl;
                cout<<"8.A8"<<endl;
                cout<<"9.A9"<<endl;
                cout<<"Masukan Nomor Kursi: ";
                cin>>kursi;
                cout<< "========================================================" << endl;

                switch (toupper(kursi))
                {
            case '1':
            cout << "Miracle In Hell -- 12:00" << endl;
            cout << "Kursi A1" << endl;
            cout << "Harga Rp40.000";
            break;
            case '2':
            cout << "Miracle In Hell -- 12:00" << endl;
            cout << "Kursi A2" << endl;
             cout << "Harga Rp40.000";
            break;
            case '3':
            cout << "Miracle In Hell -- 12:00" << endl;
            cout << "Kursi A3" << endl;
             cout << "Harga Rp40.000";
            break;
            case '4':
            cout << "Miracle In Hell -- 12:00" << endl;
            cout << "Kursi A4" << endl;
             cout << "Harga Rp40.000";
            break;
            case '5':
            cout << "Miracle In Hell -- 12:00" << endl;
            cout << "Kursi A5" << endl;
             cout << "Harga Rp40.000";
            break;
            case '6':
            cout << "Miracle In Hell -- 12:00" << endl;
            cout << "Kursi A6" << endl;
             cout << "Harga Rp40.000";
            break;
            case '7':
            cout << "Miracle In Hell -- 12:00" << endl;
            cout << "Kursi A7" << endl;
             cout << "Harga Rp40.000";
            break;
            case '8':
            cout << "Miracle In Hell -- 12:00" << endl;
            cout << "Kursi A8" << endl;
             cout << "Harga Rp40.000";
            break;
            case '9':
            cout << "Miracle In Hell -- 12:00" << endl;
            cout << "Kursi A9" << endl;
             cout << "Harga Rp40.000";
            break;
            }
            }
            if(b==2)
            {
                cout<< "========================================================" << endl;
                cout<<" *14:00 -- Pilih Kursi"<<endl;
                cout<<"1.A1"<<endl;
                cout<<"2.A2"<<endl;
                cout<<"3.A3"<<endl;
                cout<<"4.A4"<<endl;
                cout<<"5.A5"<<endl;
                cout<<"6.A6"<<endl;
                cout<<"7.A7"<<endl;
                cout<<"8.A8"<<endl;
                cout<<"9.A9"<<endl;
                cout<<"Masukan Nomor Kursi: ";
                cin>>kursi;
                cout<< "========================================================" << endl;

                switch (toupper(kursi))
                {
            case '1':
            cout << "Miracle In Hell -- 14:00" << endl;
            cout << "Kursi A1" << endl;
             cout << "Harga Rp40.000";
            break;
            case '2':
            cout << "Miracle In Hell -- 14:00" << endl;
            cout << "Kursi A2" << endl;
             cout << "Harga Rp40.000";
            break;
            case '3':
            cout << "Miracle In Hell -- 14:00" << endl;
            cout << "Kursi A3" << endl;
             cout << "Harga Rp40.000";
            break;
            case '4':
            cout << "Miracle In Hell -- 14:00" << endl;
            cout << "Kursi A4" << endl;
            break;
            case '5':
            cout << "Miracle In Hell -- 14:00" << endl;
            cout << "Kursi A5" << endl;
             cout << "Harga Rp40.000";
            break;
            case '6':
            cout << "Miracle In Hell -- 14:00" << endl;
            cout << "Kursi A6" << endl;
             cout << "Harga Rp40.000";
            break;
            case '7':
            cout << "Miracle In Hell -- 14:00" << endl;
            cout << "Kursi A7" << endl;
             cout << "Harga Rp40.000";
            break;
            case '8':
            cout << "Miracle In Hell -- 14:00" << endl;
            cout << "Kursi A8" << endl;
             cout << "Harga Rp40.000";
            break;
            case '9':
            cout << "Miracle In Hell -- 14:00" << endl;
            cout << "Kursi A9" << endl;
             cout << "Harga Rp40.000";
            break;
            }
            }
            if(b==3)
            {
                cout<< "========================================================" << endl;
                cout<<" *16:00 -- Pilih Kursi"<<endl;
                cout<<"1.A1"<<endl;
                cout<<"2.A2"<<endl;
                cout<<"3.A3"<<endl;
                cout<<"4.A4"<<endl;
                cout<<"5.A5"<<endl;
                cout<<"6.A6"<<endl;
                cout<<"7.A7"<<endl;
                cout<<"8.A8"<<endl;
                cout<<"9.A9"<<endl;
                cout<<"Masukan Nomor Kursi: ";
                cin>>kursi;
                cout<< "========================================================" << endl;

                switch (toupper(kursi))
                {
            case '1':
            cout << "Miracle In Hell -- 16:00" << endl;
            cout << "Kursi A1" << endl;
             cout << "Harga Rp40.000";
            break;
            case '2':
            cout << "Miracle In Hell -- 16:00" << endl;
            cout << "Kursi A2" << endl;
             cout << "Harga Rp40.000";
            break;
            case '3':
            cout << "Miracle In Hell -- 16:00" << endl;
            cout << "Kursi A3" << endl;
             cout << "Harga Rp40.000";
            break;
            case '4':
            cout << "Miracle In Hell -- 16:00" << endl;
            cout << "Kursi A4" << endl;
             cout << "Harga Rp40.000";
            break;
            case '5':
            cout << "Miracle In Hell -- 16:00" << endl;
            cout << "Kursi A5" << endl;
             cout << "Harga Rp40.000";
            break;
            case '6':
            cout << "Miracle In Hell -- 16:00" << endl;
            cout << "Kursi A6" << endl;
             cout << "Harga Rp40.000";
            break;
            case '7':
            cout << "Miracle In Hell -- 16:00" << endl;
            cout << "Kursi A7" << endl;
             cout << "Harga Rp40.000";
            break;
            case '8':
            cout << "Miracle In Hell -- 16:00" << endl;
            cout << "Kursi A8" << endl;
             cout << "Harga Rp40.000";
            break;
            case '9':
            cout << "Miracle In Hell -- 16:00" << endl;
            cout << "Kursi A9" << endl;
             cout << "Harga Rp40.000";
            break;
            }
            }
            if(b==4)
            {
                cout<< "========================================================" << endl;
                cout<<" *20:00 -- Pilih Kursi"<<endl;
                cout<<"1.A1"<<endl;
                cout<<"2.A2"<<endl;
                cout<<"3.A3"<<endl;
                cout<<"4.A4"<<endl;
                cout<<"5.A5"<<endl;
                cout<<"6.A6"<<endl;
                cout<<"7.A7"<<endl;
                cout<<"8.A8"<<endl;
                cout<<"9.A9"<<endl;
                cout<<"Masukan Nomor Kursi: ";
                cin>>kursi;
                cout<< "========================================================" << endl;

                switch (toupper(kursi))
                {
            case '1':
            cout << "Miracle In Hell -- 20:00" << endl;
            cout << "Kursi A1" << endl;
             cout << "Harga Rp40.000";
            break;
            case '2':
            cout << "Miracle In Hell -- 20:00" << endl;
            cout << "Kursi A2" << endl;
             cout << "Harga Rp40.000";
            break;
            case '3':
            cout << "Miracle In Hell -- 20:00" << endl;
            cout << "Kursi A3" << endl;
             cout << "Harga Rp40.000";
            break;
            case '4':
            cout << "Miracle In Hell -- 20:00" << endl;
            cout << "Kursi A4" << endl;
             cout << "Harga Rp40.000";
            break;
            case '5':
            cout << "Miracle In Hell -- 20:00" << endl;
            cout << "Kursi A5" << endl;
             cout << "Harga Rp40.000";
            break;
            case '6':
            cout << "Miracle In Hell -- 20:00" << endl;
            cout << "Kursi A6" << endl;
             cout << "Harga Rp40.000";
            break;
            case '7':
            cout << "Miracle In Hell -- 20:00" << endl;
            cout << "Kursi A7" << endl;
             cout << "Harga Rp40.000";
            break;
            case '8':
            cout << "Miracle In Hell -- 20:00" << endl;
            cout << "Kursi A8" << endl;
             cout << "Harga Rp40.000";
            break;
            case '9':
            cout << "Miracle In Hell -- 20:00" << endl;
            cout << "Kursi A9" << endl;
             cout << "Harga Rp40.000";
            break;
                }

}

        }
        if (a==2)
        {
            cout<< "========================================================" << endl;
            cout<<" *Two Peace Blue -- Pilih Jam"<<endl;
            cout<<"1.12:00"<<endl;
            cout<<"2.14:00"<<endl;
            cout<<"3.16:00"<<endl;
            cout<<"4.20:00"<<endl;
            cout<<"Masukan Nomor Jam Tayang: ";
            cin>>b;

            if(b==1)
            {
                cout<< "========================================================" << endl;
                cout<<" *12:00 -- Pilih Kursi"<<endl;
                cout<<"1.A1"<<endl;
                cout<<"2.A2"<<endl;
                cout<<"3.A3"<<endl;
                cout<<"4.A4"<<endl;
                cout<<"5.A5"<<endl;
                cout<<"6.A6"<<endl;
                cout<<"7.A7"<<endl;
                cout<<"8.A8"<<endl;
                cout<<"9.A9"<<endl;
                cout<<"Masukan Nomor Kursi: ";
                cin>>kursi;
                cout<< "========================================================" << endl;

                switch (toupper(kursi))
                {
            case '1':
            cout << "Two Peace Blue -- 12:00" << endl;
            cout << "Kursi A1" << endl;
            cout << "Harga Rp40.000";
            break;
            case '2':
            cout << "Two Peace Blue -- 12:00" << endl;
            cout << "Kursi A2" << endl;
             cout << "Harga Rp40.000";
            break;
            case '3':
            cout << "Two Peace Blue -- 12:00" << endl;
            cout << "Kursi A3" << endl;
             cout << "Harga Rp40.000";
            break;
            case '4':
            cout << "Two Peace Blue -- 12:00" << endl;
            cout << "Kursi A4" << endl;
             cout << "Harga Rp40.000";
            break;
            case '5':
            cout << "Two Peace Blue -- 12:00" << endl;
            cout << "Kursi A5" << endl;
             cout << "Harga Rp40.000";
            break;
            case '6':
            cout << "Two Peace Blue -- 12:00" << endl;
            cout << "Kursi A6" << endl;
             cout << "Harga Rp40.000";
            break;
            case '7':
            cout << "Two Peace Blue -- 12:00" << endl;
            cout << "Kursi A7" << endl;
             cout << "Harga Rp40.000";
            break;
            case '8':
            cout << "Two Peace Blue -- 12:00" << endl;
            cout << "Kursi A8" << endl;
             cout << "Harga Rp40.000";
            break;
            case '9':
            cout << "Two Peace Blue -- 12:00" << endl;
            cout << "Kursi A9" << endl;
             cout << "Harga Rp40.000";
            break;
            }
            }
            if(b==2)
            {
                cout<< "========================================================" << endl;
                cout<<" *14:00 -- Pilih Kursi"<<endl;
                cout<<"1.A1"<<endl;
                cout<<"2.A2"<<endl;
                cout<<"3.A3"<<endl;
                cout<<"4.A4"<<endl;
                cout<<"5.A5"<<endl;
                cout<<"6.A6"<<endl;
                cout<<"7.A7"<<endl;
                cout<<"8.A8"<<endl;
                cout<<"9.A9"<<endl;
                cout<<"Masukan Nomor Kursi: ";
                cin>>kursi;
                cout<< "========================================================" << endl;

                switch (toupper(kursi))
                {
            case '1':
            cout << "Two Peace Blue -- 14:00" << endl;
            cout << "Kursi A1" << endl;
             cout << "Harga Rp40.000";
            break;
            case '2':
            cout << "Two Peace Blue -- 14:00" << endl;
            cout << "Kursi A2" << endl;
             cout << "Harga Rp40.000";
            break;
            case '3':
            cout << "Two Peace Blue -- 14:00" << endl;
            cout << "Kursi A3" << endl;
             cout << "Harga Rp40.000";
            break;
            case '4':
            cout << "Two Peace Blue -- 14:00" << endl;
            cout << "Kursi A4" << endl;
            break;
            case '5':
            cout << "Two Peace Blue -- 14:00" << endl;
            cout << "Kursi A5" << endl;
             cout << "Harga Rp40.000";
            break;
            case '6':
            cout << "Two Peace Blue -- 14:00" << endl;
            cout << "Kursi A6" << endl;
             cout << "Harga Rp40.000";
            break;
            case '7':
            cout << "Two Peace Blue -- 14:00" << endl;
            cout << "Kursi A7" << endl;
             cout << "Harga Rp40.000";
            break;
            case '8':
            cout << "Two Peace Blue -- 14:00" << endl;
            cout << "Kursi A8" << endl;
             cout << "Harga Rp40.000";
            break;
            case '9':
            cout << "Two Peace Blue -- 14:00" << endl;
            cout << "Kursi A9" << endl;
             cout << "Harga Rp40.000";
            break;
            }
            }
            if(b==3)
            {
                cout<< "========================================================" << endl;
                cout<<" *16:00 -- Pilih Kursi"<<endl;
                cout<<"1.A1"<<endl;
                cout<<"2.A2"<<endl;
                cout<<"3.A3"<<endl;
                cout<<"4.A4"<<endl;
                cout<<"5.A5"<<endl;
                cout<<"6.A6"<<endl;
                cout<<"7.A7"<<endl;
                cout<<"8.A8"<<endl;
                cout<<"9.A9"<<endl;
                cout<<"Masukan Nomor Kursi: ";
                cin>>kursi;
                cout<< "========================================================" << endl;

                switch (toupper(kursi))
                {
            case '1':
            cout << "Two Peace Blue -- 16:00" << endl;
            cout << "Kursi A1" << endl;
             cout << "Harga Rp40.000";
            break;
            case '2':
            cout << "Two Peace Blue -- 16:00" << endl;
            cout << "Kursi A2" << endl;
             cout << "Harga Rp40.000";
            break;
            case '3':
            cout << "Two Peace Blue -- 16:00" << endl;
            cout << "Kursi A3" << endl;
             cout << "Harga Rp40.000";
            break;
            case '4':
            cout << "Two Peace Blue -- 16:00" << endl;
            cout << "Kursi A4" << endl;
             cout << "Harga Rp40.000";
            break;
            case '5':
            cout << "Two Peace Blue -- 16:00" << endl;
            cout << "Kursi A5" << endl;
             cout << "Harga Rp40.000";
            break;
            case '6':
            cout << "Two Peace Blue -- 16:00" << endl;
            cout << "Kursi A6" << endl;
             cout << "Harga Rp40.000";
            break;
            case '7':
            cout << "Two Peace Blue -- 16:00" << endl;
            cout << "Kursi A7" << endl;
             cout << "Harga Rp40.000";
            break;
            case '8':
            cout << "Two Peace Blue -- 16:00" << endl;
            cout << "Kursi A8" << endl;
             cout << "Harga Rp40.000";
            break;
            case '9':
            cout << "Two Peace Blue -- 16:00" << endl;
            cout << "Kursi A9" << endl;
             cout << "Harga Rp40.000";
            break;
            }
            }
            if(b==4)
            {
                cout<< "========================================================" << endl;
                cout<<" *20:00 -- Pilih Kursi"<<endl;
                cout<<"1.A1"<<endl;
                cout<<"2.A2"<<endl;
                cout<<"3.A3"<<endl;
                cout<<"4.A4"<<endl;
                cout<<"5.A5"<<endl;
                cout<<"6.A6"<<endl;
                cout<<"7.A7"<<endl;
                cout<<"8.A8"<<endl;
                cout<<"9.A9"<<endl;
                cout<<"Masukan Nomor Kursi: ";
                cin>>kursi;
                cout<< "========================================================" << endl;

                switch (toupper(kursi))
                {
            case '1':
            cout << "Two Peace Blue -- 20:00" << endl;
            cout << "Kursi A1" << endl;
             cout << "Harga Rp40.000";
            break;
            case '2':
            cout << "Two Peace Blue -- 20:00" << endl;
            cout << "Kursi A2" << endl;
             cout << "Harga Rp40.000";
            break;
            case '3':
            cout << "Two Peace Blue -- 20:00" << endl;
            cout << "Kursi A3" << endl;
             cout << "Harga Rp40.000";
            break;
            case '4':
            cout << "Two Peace Blue -- 20:00" << endl;
            cout << "Kursi A4" << endl;
             cout << "Harga Rp40.000";
            break;
            case '5':
            cout << "Two Peace Blue -- 20:00" << endl;
            cout << "Kursi A5" << endl;
             cout << "Harga Rp40.000";
            break;
            case '6':
            cout << "Two Peace Blue -- 20:00" << endl;
            cout << "Kursi A6" << endl;
             cout << "Harga Rp40.000";
            break;
            case '7':
            cout << "Two Peace Blue -- 20:00" << endl;
            cout << "Kursi A7" << endl;
             cout << "Harga Rp40.000";
            break;
            case '8':
            cout << "Two Peace Blue -- 20:00" << endl;
            cout << "Kursi A8" << endl;
             cout << "Harga Rp40.000";
            break;
            case '9':
            cout << "Two Peace Blue -- 20:00" << endl;
            cout << "Kursi A9" << endl;
             cout << "Harga Rp40.000";
            break;
            }
}

        }
        else
        {
            cout<<"Tidak Valid";
        }
    return 0;
}

