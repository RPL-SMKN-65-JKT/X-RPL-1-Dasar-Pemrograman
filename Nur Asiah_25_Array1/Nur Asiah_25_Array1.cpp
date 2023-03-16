#include <iostream>
using namespace std;

int main (){
   int jml_arr;
   string mapel[] = {"B.indo", "agama", "Sejarah", "Matematika", "B.inggris"};
   jml_arr = sizeof(mapel)/sizeof(*mapel);

   for(int a = 0; a < jml_arr; a++){ //initialization,condition,increment
       cout<<mapel[a]<<endl; //statement
   }
 }
