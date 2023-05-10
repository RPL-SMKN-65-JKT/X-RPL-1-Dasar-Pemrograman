#include <iostream>
using namespace std;

void printEvenNumbers(int n) {
    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;
    cout << "Even numbers up to " << limit << ": ";
    printEvenNumbers(limit);
    return 0;
}
