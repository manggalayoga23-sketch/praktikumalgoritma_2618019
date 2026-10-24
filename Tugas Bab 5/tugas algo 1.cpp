#include <iostream>
using namespace std;

int main() {
    string nama, nim;
    int nilai;

    cout << "Masukkan nama mahasiswa: ";
    cin >> nama;
    cout << "Masukkan NIM: ";
    cin >> nim;
    cout << "Masukkan nilai (0-100): ";
    cin >> nilai;

    if (nilai < 0 || nilai > 100) {
        cout << "Nilai tidak valid";
    } else {
        switch (nilai / 10) {
            case 10:
            case 9:
                cout << "Grade: A";
                break;
            case 8:
                cout << "Grade: B";
                break;
            case 7:
                cout << "Grade: C";
                break;
            case 6:
                cout << "Grade: D";
                break;
            default:
                cout << "Grade: E";
        }
    }

    return 0;
}

