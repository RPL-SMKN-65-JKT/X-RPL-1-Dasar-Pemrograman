#include <iostream>
using namespace std;

int main()
{
    system ("color B0");
  int arr[1000],n;
  int average, jumlah = 0;

  cout << "Element Array: ";
  cin >> n;

  cout <<"("<<endl;

  for (int i = 0; i < n; i++){
    cout << "Nilai Ke " << i+1 << " = ";
    cin >> arr[i];
    jumlah = jumlah + arr[i];
  }
  cout <<")"<<endl;
  average = jumlah/n;

  cout << "Rata-Ratanya Adalah : " << average << endl;
}
