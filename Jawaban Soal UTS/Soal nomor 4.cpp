#include<iostream>
#include<conio.h>
#include <string>
using namespace std;

int main() {
    
    float angka,rata,total = 0;
    int jumlah;
    
    cout<< "1. Mencari Rata-rata. (jumlah angka ditentukan)" << endl;
    cout << endl;
    cout << "masukkan jumlah angka      : "; cin >> jumlah;
    cout << endl;
    //jumlah -=1;
    for (int i = 0; i < jumlah; i++) {
        cout << "Masukkan angka            : "; cin >> angka;
        total = total + angka;
    } 
    cout << endl;
    cout << "Total                      : " << total << endl;
    rata = total / jumlah;
    cout << "Rata-rata                 : " << rata;
    getch();
}