#include <iostream>
#include <array>
using namespace std;

int main(){
    array<string, 7> names = {"Umar", "Rizky", "Riyani", "Nashwa", "Nia", "Cila", "Mira"};

    printf("Ada %d data di dalam array: \n", names.size()); //statement

    for(int h = 0; h < names.size(); h++){//inisialisasi, kondisi, increment
        cout << h << ". " << names[h] << endl; //statement
    }

    return 0;
}
