#include <iostream>
using namespace std;

int main() {
    string nama, nim, menu;
    int pilih, jumlah, harga;
    int total, diskon = 0, bayar;

    cout << "Masukkan nama pemesan: ";
    getline(cin, nama);

    cout << "\n=== DAFTAR MENU KANTIN ===" << endl;
    cout << "1. Soto        - Rp7000" << endl;
    cout << "2. Bakso       - Rp12000" << endl;
    cout << "3. Mie Ayam    - Rp10000" << endl;
    cout << "4. Es Teh      - Rp3000" << endl;

    cout << "Pilih menu: ";
    cin >> pilih;

    switch (pilih) {
        case 1:
            menu = "Nasi Goreng";
            harga = 15000;
            break;
        case 2:
            menu = "Bakso";
            harga = 12000;
            break;
        case 3:
            menu = "Mie Ayam";
            harga = 10000;
            break;
        case 4:
            menu = "Es Teh";
            harga = 3000;
            break;
        default:
            cout << "Pilihan menu tidak tersedia";
            return 0;
    }

    cout << "Masukkan jumlah pesanan: ";
    cin >> jumlah;

    if (jumlah <= 0) {
        cout << "Jumlah pesanan tidak valid";
        return 0;
    }

    total = harga * jumlah;

    if (total > 40000) {
        diskon = total * 8 / 100;
    }

    bayar = total - diskon;

    cout << "\n=== STRUK PEMBAYARAN ===" << endl;
    cout << "Nama pemesan	: " << nama << endl;
    cout << "Nama makanan	: " << menu << endl;
    cout << "Harga satuan	: Rp" << harga << endl;
    cout << "Jumlah pesanan	: " << jumlah << endl;
    cout << "Diskon 8%	: Rp" << diskon << endl;
    cout << "Total Pembayaran: Rp" << bayar << endl;

    return 0;
}

