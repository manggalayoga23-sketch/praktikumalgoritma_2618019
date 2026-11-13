
#include <iostream>
using namespace std;

int main() {
    int n, i, j;
    
    cout << "2618019 || Manggala Yoga Pratama" << endl;
    cout << "           Tugas BAB7           " << endl;
    cout << "================================" << endl;

    cout << "1. Membuat Kotak Angka Diagonal" << endl;
    cout << "   Masukkan ukuran kotak: ";
    cin >> n;
    cout << endl;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == j) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    cout << "\n2. Membuat Segitiga Terbalik Genap" << endl;
    cout << "   Masukkan ukuran segitiga: ";
    cin >> n;
    cout << endl;

    i = n;
    while (i >= 1) {
        j = 1;
        int angka = 2;

        while (j <= i) {
            cout << angka << " ";
            angka += 2;
            j++;
        }

        cout << endl;
        i--;
    }

    cout << "\n3. Membuat Segitiga Siku-siku Huruf" << endl;
    cout << "   Masukkan ukuran segitiga: ";
    cin >> n;
    cout << endl;

    i = 1;
    do {
        j = 1;

        do {
            cout << char('A' + j - 1) << " ";
            j++;
        } while (j <= i);

        cout << endl;
        i++;

    } while (i <= n);

    return 0;
}

