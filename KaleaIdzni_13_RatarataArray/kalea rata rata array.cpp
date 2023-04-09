#include <iostream>
using namespace std;

int main(){
    int array[10],n;
    int j, t, r;

    cout <<"Jumlah Elemen Array       :  ";
    cin >> n;
    cout<<"================================="<<endl;


    for(int i=0; i < n; i++) {
        cout << "Masukan Nilai Array Ke-" << i+1 << "  :  ";
        cin >> array[i];
        t = t + array[i];

    }
    j = sizeof(array)/sizeof (array[0]);
    r = t / j;


    cout<<"================================="<<endl;
    cout << "Total Array          :  " << t << endl;
    cout << "Rata-Rata Array      :  " << r << endl;
}
