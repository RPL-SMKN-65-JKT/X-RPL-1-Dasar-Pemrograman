#include <iostream>
using namespace std;

int main (){
 int jml_arr;
  string orang[] ={"bagir","ferdian","ilham","nazhif","naswa"};
  jml_arr = sizeof(orang)/sizeof(*orang);

  for(int a = 0; a < jml_arr; a++){ //initialization,condition,increment
    cout<<orang[a]<<endl; //statement
  }
}
