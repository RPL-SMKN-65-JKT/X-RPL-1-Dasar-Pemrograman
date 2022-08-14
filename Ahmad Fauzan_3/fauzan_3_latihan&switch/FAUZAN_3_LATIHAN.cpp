//C++ problem
#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    if (i == 10)
    {
        // first if statement
        if (i < 15)
            cout<<"is smaller than 15\n";

        // nested - if statement
        // will only be executed if statement above
        // is true
        if  (i < 12)
            cout<<"i smaller than 12 too\n";
        else
            cout<<"i is smaller than 15";
    }
    return 0;
}
