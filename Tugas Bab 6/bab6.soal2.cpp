#include <iostream>
using namespace std;

int main() {
    int jumlahDeret;
    int angka = 1;
    int total = 0;
    
    cout << "## Manggala Yoga Pratama - 2618019 ##" << endl;
    cout << "=====================================" << endl;
    cout << "##  Program C++ Penjumlahan Deret  ##" << endl;
    cout << "=====================================" << endl;

    cout << "\nJumlah deret yang diinginkan: ";
    cin >> jumlahDeret;

    if (jumlahDeret <= 0) {
        cout << "Jumlah deret harus lebih dari 0." << endl;
        return 0;
    }

    while (angka <= jumlahDeret) {
        total += angka;
        cout << angka;

        if (angka < jumlahDeret) {
            cout << " + ";
        }

        angka++;
    }

    cout << " = " << total << endl;

    return 0;
}
