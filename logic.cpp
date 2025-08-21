#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "=== Aplikasi Daftar Nilai Mutlak ===" << endl;
    cout << "Berapa banyak bilangan yang ingin dicek? ";
    cin >> n;

    int angka, hasil;

    cout << "\nHasil perhitungan:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << "Bilangan ke-" << i << ": ";
        cin >> angka;

        // Algoritma nilai mutlak manual
        if (angka < 0) {
            hasil = -angka;
        } else {
            hasil = angka;
        }

        cout << "   -> Nilai mutlak: " << hasil << endl;
    }

    cout << "\n=== Selesai ===" << endl;
    return 0;
}
