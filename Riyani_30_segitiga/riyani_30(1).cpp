#include <iostream>
using namespace std;

int main()
{
  int a, b, c;

  cout << "Berikan Sisi a: ";
  cin >> a;
  cout << "Berikan Sisi b: ";
  cin >> b;
  cout << "Berikan Sisi c: ";
  cin >> c;

  if (a==b && a==c)
  {
   system("color fc");
   std::cout<<"Segitiga sama sisi"<<std::endl;
  }
   else if(a==b || a==c)
   {
   if(a!=b || a!=c)
  {
   system("color fa");
   std::cout<<"Segitiga Sama kaki"<<std::endl;
     }
   }
   else
   cout<<"Segitiga sembarang"<<endl;

  return 0;

}