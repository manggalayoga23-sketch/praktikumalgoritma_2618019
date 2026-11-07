#include <iostream>
using namespace std;

int main() {
    int jumlahAngka;

    cout << "==== 2618019 || Manggala Yoga Pratama ====" << endl;
    cout << "\nMasukkan jumlah angka: ";
    cin >> jumlahAngka;

    cout << "\n=== Deret Campur Logika ===" << endl;

    for (int angka = 1; angka <= jumlahAngka; angka++) {
        if (angka % 2 == 0) {
            cout << angka * 2;
        } else if (angka % 3 == 0) {
            cout << angka + 3;
        } else {
            cout << angka;
        }

        if (angka < jumlahAngka) {
            cout << " ";
        }
    }

    cout << endl;
    return 0;
}
