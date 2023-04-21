#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Masukkan angka: ";
    cin >> n;

    char puncak = 'A' + n - 1;

    for (char c = puncak; c >= 'A'; c--) {
        for (char d = 'A'; d <= c; d++) {
         if (d == puncak) {
             goto lompat;
         }
            cout << d;
        }
        lompat :
        for (int i = 0; i < 2 * (puncak - c)-1; i++) {
            cout << " ";
        }
        for (char d = c; d >= 'A'; d--) {
            cout << d;
        }
        cout << endl;
    }

    return 0;
}
