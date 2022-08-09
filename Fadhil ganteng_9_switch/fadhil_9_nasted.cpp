#include <iostream>
using namespace std;

int main ()
{
    int i = 10;

    if (i == 10)
    {
      // Frist if statment
      if (i < 15)
        cout<<"i is smaller than 15\n";

      // Nested - if statment
      // Will only be executed if statment above
      // Is true
      if (i < 12)
        cout<<"i is smaller than 12 too\n";
      else
        cout<<"i is greater than 15";
    }
 return 0;

}
