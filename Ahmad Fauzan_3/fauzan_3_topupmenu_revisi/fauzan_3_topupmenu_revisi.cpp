#include<iostream>
using namespace std;

int main(){

    cout<<"_______________________________________________________________________________________________________________________"<<endl;
    cout<<"Top up menu by Ahmad Fauzan X pplg 1"<<endl;

    int menu;
    int balance=10000;
    char topup;
    int deposite;
    int intopup;


    cout<<"1. Show balance"<<endl;
    cout<<"2. Deposite"<<endl;
    cout<<"3. Voucher game menu"<<endl;
    cout<<"4. Cancel"<<endl;
    cout<<"_______________________________________________________________________________________________________________________"<<endl;
    cout<<"Type the number between the options above"<<endl;

    cin>>menu;
    switch (menu){
    case 1:
        cout<<balance<<endl;
        cout<<"_______________________________________________________________________________________________________________________"<<endl;
        break;
    case 2:
        cout<<"===================================================================================================================="<<endl;
        cout<<"How much do you want to deposite?"<<endl;
        cin>>deposite;
        cout<<"Your balance now is "<<deposite+balance<<endl;
        cout<<"Thanks"<<endl;
        cout<<"===================================================================================================================="<<endl;
        break;
    case 3:
        cout<<"===================================================================================================================="<<endl;
        cout<<"[P]Pubg Rp.5k ~ Rp.1.000k"<<endl;
        cout<<"[M]Mobile legends Rp.3k ~ Rp.1.000k"<<endl;
        cout<<"[F]Free Fire Rp.2k ~ Rp.1.000k"<<endl;
        cout<<"===================================================================================================================="<<endl;
        cout<<"The game you want to top up?"<<endl;
        cout<<"Please enter the Alphabet that is next to the game names"<<endl;
        cin>>topup;
        cout<<"===================================================================================================================="<<endl;
            switch (topup){
            case 'P':
            cout<<"Top up PUBG"<<endl;
            cout<<"[1]5k,[2]25k,[3]50k,[4]100k,[5]200k,[6]250k,[7]500k,[8]1.000k"<<endl;
            cout<<"please enter the nominal"<<endl;
            cout<<"Please enter the number that is next to the nominal"<<endl;
            cout<<"===================================================================================================================="<<endl;
            cin>>intopup;

                switch(intopup){
                case 1:
                    cout<<"Top up 5k is under the process.Thankyou for order!!"<<endl;
                    break;
                case 2:
                    cout<<"Top up 25k is under the process.Thankyou for order!!"<<endl;
                    break;
                case 3:
                    cout<<"Top up 50k is under the process.Thankyou for order!!"<<endl;
                    break;
                case 4:
                    cout<<"Top up 100k is under the process.Thankyou for order!!"<<endl;
                    break;
                case 5:
                    cout<<"Top up 200k is under the process.Thankyou for order!!"<<endl;
                    break;
                case 6:
                    cout<<"Top up 250k is under the process.Thankyou for order!!"<<endl;
                    break;
                case 7:
                    cout<<"Top up 500k is under the process.Thankyou for order!!"<<endl;
                    break;
                case 8:
                    cout<<"Top up 1.000k is under the process.Thankyou for order!!"<<endl;
                    break;
                default:
                    cout<<"Sorry your input is sus..."<<endl;
                }
                break;

            case 'M':
            cout<<"Top up Mobile legends"<<endl;
            cout<<"[1]5k,[2]25k,[3]50k,[4]100k,[5]200k,[6]250k,[7]500k,[8]1.000k"<<endl;
            cout<<"please enter the nominal"<<endl;
            cout<<"Please enter the number that is next to the nominal"<<endl;
            cout<<"===================================================================================================================="<<endl;
            cin>>intopup;
                switch(intopup){
                case 1:
                    cout<<"Top up 5k is under the process.Thankyou for order!!"<<endl;
                    break;
                case 2:
                    cout<<"Top up 25k is under the process.Thankyou for order!!"<<endl;
                    break;
                case 3:
                    cout<<"Top up 50k is under the process.Thankyou for order!!"<<endl;
                    break;
                case 4:
                    cout<<"Top up 100k is under the process.Thankyou for order!!"<<endl;
                    break;
                case 5:
                    cout<<"Top up 200k is under the process.Thankyou for order!!"<<endl;
                    break;
                case 6:
                    cout<<"Top up 250k is under the process.Thankyou for order!!"<<endl;
                    break;
                case 7:
                    cout<<"Top up 500k is under the process.Thankyou for order!!"<<endl;
                    break;
                case 8:
                    cout<<"Top up 1.000k is under the process.Thankyou for order!!"<<endl;
                    break;
                default:
                    cout<<"Sorry your input is sus..."<<endl;

                }
                break;

            case 'F':
            cout<<"Top up Free Fire"<<endl;
            cout<<"[1]5k,[2]25k,[3]50k,[4]100k,[5]200k,[6]250k,[7]500k,[8]1.000k"<<endl;
            cout<<"please enter the nominal"<<endl;
            cout<<"Please enter the number that is next to the nominal"<<endl;
            cout<<"===================================================================================================================="<<endl;
            cin>>intopup;
            break;
                switch(intopup){
                case 1:
                    cout<<"Top up 5k is under the process.Thankyou for order!!"<<endl;
                    break;
                case 2:
                    cout<<"Top up 25k is under the process.Thankyou for order!!"<<endl;
                    break;
                case 3:
                    cout<<"Top up 50k is under the process.Thankyou for order!!"<<endl;
                    break;
                case 4:
                    cout<<"Top up 100k is under the process.Thankyou for order!!"<<endl;
                    break;
                case 5:
                    cout<<"Top up 200k is under the process.Thankyou for order!!"<<endl;
                    break;
                case 6:
                    cout<<"Top up 250k is under the process.Thankyou for order!!"<<endl;
                    break;
                case 7:
                    cout<<"Top up 500k is under the process.Thankyou for order!!"<<endl;
                    break;
                case 8:
                    cout<<"Top up 1.000k is under the process.Thankyou for order!!"<<endl;
                    break;
                default:
                    cout<<"Sorry your input is sus..."<<endl;
                }
        case 4:
        default:
            cout<<"hiasan aja ini mah"<<endl;
            }
        }
    return 0;
}

