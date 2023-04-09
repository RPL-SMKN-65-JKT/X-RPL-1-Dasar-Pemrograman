#include <iostream>
using namespace std;

int main()                                                      //fungsi utama dari suatu program
{
    system ("color B0");                                        //mengeluarkan suatu komponen
  int arr[100],n;                                               //"arr[100]"digunakan untuk batas penyimpanan tersebut dan inisialisasi/typedata
  float average, jumlah = 0;                                    //float digunakaan untuk menampilkan bilangan pecahan dan inisialisasi

  cout << "Element Array: ";                                    //"cout" digunakan untuk output text
  cin >> n;                                                     //"cin" digunakan untuk menginput text

  cout <<"("<<endl;

  for (int i = 0; i < n; i++){                                  //inisialisasi,kondisi,increment
    cout << "Nilai Ke " << i+1 << " = ";                        //"i+1" digunakan untuk menghadirkan data ke berapa
    cin >> arr[i];                                              //"arr[i]" digunakan untuk menyimpan data ke "i"
    jumlah = jumlah + arr[i];                                   //"jumlah" digunakan untuk hasil dari semua data pada array
  }
  cout <<")"<<endl;
  average = jumlah/n;

  cout << "Rata-Ratanya Adalah : " << average << endl;
}
