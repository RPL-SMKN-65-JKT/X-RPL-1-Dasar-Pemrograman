#include <iostream>
using namespace std;
int main() {
     system ("color B0");

        //Jasa Pijat//
        int org,i=1,sum=0,per=20000;
        string pasien;
        float durasi,jam=1000,j=0,total;

        cout<<"\t        JAPITEK     "<<endl;
        cout<<"\t   Jasa Pijat Kretek"<<endl;
        cout<<"\t Jl.Cipinang muara"<<endl;
        cout<<"========================================"<<endl;
        cout<<endl;
        cout<<"\t Jumlah orang: ";
        cin>> org;

        for (int i=1;i<=org;i++) {
            cout<<"-> Orang ke:"<<i<<".";
            cin>> pasien;;
            cout<<"   Durasi berapa jam: ";
            cin>> durasi;
            sum=org*per;
            j=j+durasi;
        }
        cout<<" ______________________________________ "<<endl;
        cout<<"|       Struk Jasa Pijat Kretek        |"<<endl;
        cout<<"|--------------------------------------|"<<endl;
        cout<<"|                                      |"<<endl;
        cout<<"| Total durasi: "<<j<<"                      |"<<endl;
        j=j*jam;
        total=sum+j;
        cout<<"| Total harga :Rp. "<<total<<"               |"<<endl;
        cout<<"|______________________________________|"<<endl;
        cout<<"========================================"<<endl;
        cout<<"\t         TRIMAKASIH";

        return 0;
}