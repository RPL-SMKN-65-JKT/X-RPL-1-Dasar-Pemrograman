#include<iostream>
using namespace std;

int main(){

    cout<<"____________________________________________________________________________________________________________________"<<endl;
    cout<<"Top up menu by Ahmad Fauzan X pplg 1"<<endl;

    int menu;
    int balance=10000;
    int topup;
    int deposite;

    cout<<"1. Show balance"<<endl;
    cout<<"2. Deposite"<<endl;
    cout<<"3. Voucher game menu"<<endl;
    cout<<"4. Cancel"<<endl;
    cout<<"Type the number between the options above"<<endl;

    cin>>menu;
    switch (menu){
    case 1:
        cout<<balance;
        break;
    case 2:
        cout<<"How much do you want to deposite?"<<endl;
        cin>>deposite;
        cout<<"Your balance now is "<<deposite+balance<<endl;
        cout<<"Thanks"<<endl;
        break;
    case 3:
        cout<<"Pubg Rp.5k ~ Rp.1000k"<<endl;
        cout<<"Mobile legends Rp.3k ~ Rp.1000k"<<endl;
        cout<<"Game burik Rp.2k ~ Rp.1000k"<<endl;
        cout<<"The game you want to top up?"<<endl;
        cout<<"For small children, please tell parents first :)"<<endl;
        cin>>topup;
        cout<<"Request is in progress, thank you"<<endl;
        break;
    case 4:
    default:
        cout<<"____________________________________________________________________________________________________________________";
    }
    return 0;
}
