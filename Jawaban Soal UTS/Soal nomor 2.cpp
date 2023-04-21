#include <iostream>
#include <string>
using namespace std;

int main() {
    char pilihan;
    float harga, total = 0;

    do {
        cout << "Harga barang: Rp. ";
        cin >> harga;

        total += harga;

        cout << "Tambah barang lagi? (y/n): ";
        cin >> pilihan;
    } while (pilihan == 'y' || pilihan == 'Y');

    cout << endl;
    cout << "Total harga: Rp. " << total << endl;

    return 0;
}
