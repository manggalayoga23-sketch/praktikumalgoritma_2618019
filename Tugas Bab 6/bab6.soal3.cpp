#include <iostream>
using namespace std;

int main() {
    int level = 1;
    int jawaban;
    int hasil;
    bool lanjut;
    
    cout << "==== 2618019 || Manggala Yoga Pratama ====" << endl;
    cout << "====     Program Game Matematika      ====" << endl;
    
	do {
        hasil = level + (level * 5);

        cout << "\nLevel " << level << endl;
        cout << "Berapakah hasil dari "
             << level << " + " << (level * 5) << "? ";
        cin >> jawaban;

        if (jawaban == hasil) {
            cout << "Benar! Naik ke level berikutnya." << endl;
            level++;
            lanjut = (level <= 6);
        } else {
            cout << "Salah! Game Over." << endl;
            lanjut = false;
        }

        cout << endl;
    } while (lanjut);

    if (level > 6) {
        cout << "Selamat! Kamu menyelesaikan semua level!" << endl;
    }

    return 0;
}
