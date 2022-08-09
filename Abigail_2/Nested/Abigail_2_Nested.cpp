#include <iostream>
using namespace std;

int main()
{
    int i = 10;

    if (i == 10)
    {
        // First if statement
        if (i < 15)
            cout<<"i is smaller than 15\n";

        // Nested - If Statement
        // Kill Only Be Execute If Statement Above
        // Is True

    if (i < 12)
        cout<<"i is smaller than 12 too\n";
    else
        cout<<"i is greater that 15";
    }

    return 0;
}
