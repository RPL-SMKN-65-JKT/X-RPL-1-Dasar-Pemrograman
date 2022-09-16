#include <iostream>
#include <iostream>

using namespace std;
typedef struct Jam
{
    int hh;
    int mm;
    int ss;
};

int main() {

    struct Jam J = {0,0,0};




    cout << "=====================" << endl;
    cout << "Masukan Jam:    ";
    cin >> J.hh;
    cout << "Masukan Menit:  ";
    cin >> J.mm;
    cout << "Masukan Detik:  ";
    cin >> J.ss;
    cout << "=====================" << endl;

    if (J.ss + 1 < 60) {
        (J.ss += 1);
    } else {
        (J.ss = 0);
        if (J.mm + 1 < 60) {
            (J.mm += 1);
        } else {
            (J.mm = 0);
            if (J.hh + 1 < 24) {
                (J.hh += 1);
            } else {
                (J.hh = 0);
            }
        }
    }
    cout << "Jam: " << J.hh << endl;
    cout << "Menit: " << J.mm << endl;
    cout << "Detik: " << J.ss << endl;
    cout << "=====================" << endl;
    return 0;
}