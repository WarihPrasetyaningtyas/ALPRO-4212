#include <iostream>
using namespace std;

const float phi = 3.14159; // Nilai phi

struct PersegiPanjang {
    int panjang;
    int lebar;
};

struct Lingkaran {
    int jariJari;
};

struct Kerucut {
    int jariJari;
    int tinggi;
};

struct Bola {
    int jariJari;
};

int hitungLuasPersegiPanjang(PersegiPanjang persegiPanjang) {
    return persegiPanjang.panjang * persegiPanjang.lebar;
}

float hitungLuasLingkaran(Lingkaran lingkaran) {
    return phi * lingkaran.jariJari * lingkaran.jariJari;
}

float hitungVolumeKerucut(Kerucut kerucut) {
    return (1.0 / 3.0) * phi * kerucut.jariJari * kerucut.jariJari * kerucut.tinggi;
}

float hitungVolumeBola(Bola bola) {
    return (4.0 / 3.0) * phi * bola.jariJari * bola.jariJari * bola.jariJari;
}

int main() {
    PersegiPanjang persegiPanjang;
    Lingkaran lingkaran;
    Kerucut kerucut;
    Bola bola;

    // Input panjang dan lebar persegi panjang
    cout << "Masukkan panjang persegi panjang: ";
    cin >> persegiPanjang.panjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> persegiPanjang.lebar;

    // Input jari-jari lingkaran
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> lingkaran.jariJari;

    // Input jari-jari dan tinggi kerucut
    cout << "Masukkan jari-jari kerucut: ";
    cin >> kerucut.jariJari;
    cout << "Masukkan tinggi kerucut: ";
    cin >> kerucut.tinggi;

    // Input jari-jari bola
    cout << "Masukkan jari-jari bola: ";
    cin >> bola.jariJari;

    // Hitung dan tampilkan hasil
    cout << "Luas persegi panjang: " << hitungLuasPersegiPanjang(persegiPanjang) << endl;
    cout << "Luas lingkaran: " << hitungLuasLingkaran(lingkaran) << endl;
    cout << "Volume kerucut: " << hitungVolumeKerucut(kerucut) << endl;
    cout << "Volume bola: " << hitungVolumeBola(bola) << endl;

    return 0;
}
