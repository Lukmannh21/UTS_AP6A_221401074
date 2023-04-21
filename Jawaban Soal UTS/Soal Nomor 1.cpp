#include <iostream>
#include <string>

using namespace std;

int main() {
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;

    string angka_string = to_string(angka);
    cout << "Angka dalam bentuk string: " << angka_string << endl;

    return 0;
}
