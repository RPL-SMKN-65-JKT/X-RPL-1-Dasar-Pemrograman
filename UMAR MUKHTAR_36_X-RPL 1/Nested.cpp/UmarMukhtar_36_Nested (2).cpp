#include <iostream>

using namespace std;

int main()
{
    cout<<"UMAR MUKHTAR_36" << endl;
    cout<<"===============" << endl;
    int i =10;
    if (i == 10)
    {
        //first if statement
        if (i<15)
            cout<<"i is smaller than 15\n";

        //Nested - if statement
        //Will only be executed if statement above
        //is true
        if(i<12)
            cout<<"i is smaller than 12 too\n";
        else
            cout<<"i is greater than 15";
    }

    return 0;
}
