#include <iostream>
using namespace std;

int main() {
    string nama, nim;
    int pilih;
    float sisi, panjang, lebar, alas, tinggi, luas;

    cout << "Masukkan nama: ";
    cin >> nama;
    cout << "Masukkan NIM: ";
    cin >> nim;

cout << "\n==== MENGHITUNG LUAS BANGUN DATAR ====" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "Pilih bangun datar: ";
    cin >> pilih;

    switch (pilih) {
        case 1:
            cout << "Masukkan sisi: ";
            cin >> sisi;
            luas = sisi * sisi;
            cout << "Luas persegi = " << luas;
            break;

        case 2:
            cout << "Masukkan panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar: ";
            cin >> lebar;
            luas = panjang * lebar;
            cout << "Luas persegi panjang = " << luas;
            break;

        case 3:
            cout << "Masukkan alas: ";
            cin >> alas;
            cout << "Masukkan tinggi: ";
            cin >> tinggi;
            luas = alas * tinggi / 2;
            cout << "Luas segitiga = " << luas;
            break;

        default:
            cout << "Pilihan tidak tersedia";
    }

    return 0;
}

