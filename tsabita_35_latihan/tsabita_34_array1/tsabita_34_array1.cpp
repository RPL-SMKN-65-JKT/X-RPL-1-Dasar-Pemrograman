#include <iostream>
using namespace std;

int main(){
  int array[50], i, n;
  float average, sum=0;

  cout << "masukkan banyaknya elemen array: ";
  cin >> n;

  for(i=0; i<n; i++){
    cout << "nilai ke-" << i+0 << " : ";
    cin >> array[i];
    sum = sum + array[i];
  }

  average = sum/n;
  cout << "nilai total: " << sum << endl;
  cout << "rata-rata: " << average << endl;

  return 0;
}
