#include <iostream>
using namespace std;

int main() {
    string nama, nim;
    int pendapatan, pajak;
    double tarif;
    int tanggungan;

    cout << "===== PROGRAM PAJAK PENDAPATAN =====" << endl;

    cout << "Nama Anda : ";
    getline(cin, nama);

    cout << "NIM Anda  : ";
    cin >> nim;

    cout << "\n===== DATA PENDAPATAN =====" << endl;
    cout << "Pendapatan bulanan: Rp ";
    cin >> pendapatan;

    if (pendapatan < 0) {
        cout << "Input tidak valid!" << endl;
    } else {
        if (pendapatan < 5000000) {
            tarif = 0;
        } else if (pendapatan < 10000000) {
            tarif = 0.05;
        } else if (pendapatan < 20000000) {
            tarif = 0.10;
        } else {
            tarif = 0.15;
        }

        cout << "Memiliki tanggungan? (1=Ya, 0=Tidak): ";
        cin >> tanggungan;

        if (tanggungan == 0 || tanggungan == 1) {
            pajak = pendapatan * tarif;

            if (tanggungan == 1) {
                pajak = pajak - 100000;
            }

            if (pajak < 0) {
                pajak = 0;
            }

            cout << "Tarif pajak : " << tarif * 100 << "%" << endl;
            cout << "Pajak akhir : Rp " << pajak << endl;
        } else {
            cout << "Input tanggungan tidak valid!" << endl;
        }
    }

    return 0;
}