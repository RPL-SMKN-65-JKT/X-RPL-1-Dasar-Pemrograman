//Program Huruf Vokal
#include <iostream>
using namespace std;

int main () {
  
char cc;

cout << "================" << endl;
cout << "Type A-Z: ";
cin >> cc;
cout << "================" << endl;


   if (cc == 'a')
       cout << "Huruf Vokal";
   else if (cc == 'i')
       cout << "Huruf Vokal";
   else if (cc == 'u') 
       cout << "Huruf Vokal";
   else if (cc == 'e')  
       cout << "Huruf Vokal";   
   else if (cc == 'o')   
       cout << "Huruf Vokal";
       
   else
       cout << "Bukan Huruf Vokal";
       
   return 0;
}