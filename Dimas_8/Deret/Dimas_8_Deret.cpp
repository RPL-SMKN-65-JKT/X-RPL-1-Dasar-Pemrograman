#include <iostream>

using namespace std;

int main()
{
  int n;
  int x;
  int sum;

    cin>>n;
    sum=0;
    for(x=1;x<=n;x++)
    {
        sum=sum+x;
        cout<<sum<<endl;
    }

    return 0;
}

