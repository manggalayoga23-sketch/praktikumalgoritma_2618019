#include <iostream>
using namespace std;

int main() {
    int nilaiPertama, nilaiKedua;

    cout << "Masukkan nilai pertama : ";
    cin >> nilaiPertama;

    cout << "Masukkan nilai kedua : ";
    cin >> nilaiKedua;

    if ((nilaiPertama > 60) & (nilaiKedua > 60)) {
        cout << "Selamat, Anda LULUS!" << endl;
    } else {
        cout << "Maaf, Anda TIDAK LULUS." << endl;
    }

    return 0;
}
