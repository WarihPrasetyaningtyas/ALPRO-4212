//latihan enum
#include <iostream>
using namespace std;

enum Cuaca : int {
    Cerah = 1,
    Berawan = 2,
    Hujan = 3,
    Mendung = 4
};

enum GearKendaraan : int {
    P = 0,
    R = -1,
    N = 0,
    D = 1
};

enum Nilai : int {
    A = 90,
    B = 80,
    C = 70,
    D = 60,
    E = 50
};

int main() {
    // Contoh penggunaan enum untuk cuaca
    Cuaca cuacaHariIni = Cerah;
    cout << "Cuaca hari ini: ";
    switch (cuacaHariIni) {
        case Cerah:
            cout << "Cerah" << endl;
            break;
        case Berawan:
            cout << "Berawan" << endl;
            break;
        case Hujan:
            cout << "Hujan" << endl;
            break;
        case Mendung:
            cout << "Mendung" << endl;
            break;
    }

    // Contoh penggunaan enum untuk gear kendaraan
    GearKendaraan gearMobil = D;
    cout << "Gear saat ini: ";
    switch (gearMobil) {
        case P:
            cout << "Parkir" << endl;
            break;
        case R:
            cout << "Mundur (Reverse)" << endl;
            break;
        case N:
            cout << "Netral" << endl;
            break;
        case D:
            cout << "Depan (Drive)" << endl;
            break;
    }

    // Contoh penggunaan enum untuk nilai
    Nilai nilaiMahasiswa = B;
    cout << "Nilai mahasiswa: ";
    switch (nilaiMahasiswa) {
        case A:
            cout << "A" << endl;
            break;
        case B:
            cout << "B" << endl;
            break;
        case C:
            cout << "C" << endl;
            break;
        case D:
            cout << "D" << endl;
            break;
        case E:
            cout << "E" << endl;
            break;
    }

    return 0;
}
