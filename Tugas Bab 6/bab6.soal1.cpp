#include <iostream>
using namespace std;

int main() {
    int angka;
    int faktorial = 1;
    
    cout << "## Manggala Yoga Pratama - 2618019 ##" << endl;
    cout << "=====================================" << endl;
    cout << "##  Program C++ Hitung Faktorial   ##" << endl;
    cout << "=====================================" << endl;
    
    cout << "\ninput angka: ";
    cin >> angka;

    if (angka < 0) {
        cout << "Faktorial tidak dapat dihitung untuk angka negatif." << endl;
    } else {
        cout << angka << "! = ";

        for (int i = 1; i <= angka; i++) {
            faktorial *= i;
            cout << i;

            if (i < angka) {
                cout << " * ";
            }
        }

        cout << " = " << faktorial << endl;
    }

    return 0;
}
