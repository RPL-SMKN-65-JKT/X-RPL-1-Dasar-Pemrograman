#include <iostream>
using namespace std;

int main()
{
  int k, l, m;

  cout << "Berikan Sisi k: ";
  cin >> k;
  cout << "Berikan Sisi l: ";
  cin >> l;
  cout << "Berikan Sisi m: ";
  cin >> m;

  if (k==l && k==m)
  {
   system("color fc");
   std::cout<<"Segitiga sama sisi"<<std::endl;
  }
   else if(k==l || k==m)
   {
   if(k!=l || k!=m)
  {
   system("color fa");
   std::cout<<"Segitiga Sama kaki"<<std::endl;
     }
   }
   else
   cout<<"Segitiga sembarang"<<endl;

  return 0;

}