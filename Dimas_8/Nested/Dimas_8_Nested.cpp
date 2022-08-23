#include <iostream>

using namespace std;

int Nested()
{
    int i = 10;

    if (i == 10)
    {
        //first if statement
        if (i < 15)
           cout<<i<<" is smaller than 15\n";

        //nested - if statement
        //will only be executed if statement above
        //is true
        if (i < 12)
            cout<<i<<" is smaller than 12\n";
        else
            cout<<i<<" is greater than 15";
    }
    return 0;
}


