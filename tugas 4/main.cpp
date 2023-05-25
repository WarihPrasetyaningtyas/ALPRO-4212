//TUGAS 4 MEMBUAT PROGRAM REKRUSIF
//WARIH P (A11.2022.14454) - A11.4212

/*PERKALIAN*/
#include <iostream>

int perkalianRekursif(int a, int b) {
    if (b == 0) {
        return 0;
    } else {
        return a + perkalianRekursif(a, b - 1);
    }
}

int main() {
    int a, b;

    std::cout << "Masukkan dua bilangan yang akan dikalikan: ";
    std::cin >> a >> b;

    int hasil = perkalianRekursif(a, b);

    std::cout << "Hasil perkalian: " << hasil << std::endl;

    return 0;
}

/*PENJUMLAHAN*/
#include <iostream>

int penjumlahanRekursif(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + penjumlahanRekursif(n - 1);
    }
}

int main() {
    int n;

    std::cout << "Masukkan angka: ";
    std::cin >> n;

    int hasil = penjumlahanRekursif(n);

    std::cout << "Hasil penjumlahan: " << hasil << std::endl;

    return 0;
}

/*PENGURANGAN*/
#include <iostream>

int penguranganRekursif(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return penguranganRekursif(a - 1, b - 1);
    }
}

int main() {
    int a, b;

    std::cout << "Masukkan dua angka: ";
    std::cin >> a >> b;

    int hasil = penguranganRekursif(a, b);

    std::cout << "Hasil pengurangan: " << hasil << std::endl;

    return 0;
}

/*PEMBAGIAN*/
#include <iostream>

int pembagianRekursif(int a, int b) {
    if (a < b) {
        return 0;
    } else {
        return 1 + pembagianRekursif(a - b, b);
    }
}

int main() {
    int a, b;

    std::cout << "Masukkan dua angka: ";
    std::cin >> a >> b;

    int hasil = pembagianRekursif(a, b);

    std::cout << "Hasil pembagian: " << hasil << std::endl;

    return 0;
}

/*PANGKAT*/
#include <iostream>

int pangkatRekursif(int a, int b) {
    if (b == 0) {
        return 1;
    } else {
        return a * pangkatRekursif(a, b - 1);
    }
}

int main() {
    int a, b;

    std::cout << "Masukkan angka: ";
    std::cin >> a;

    std::cout << "Masukkan pangkat: ";
    std::cin >> b;

    int hasil = pangkatRekursif(a, b);

    std::cout << "Hasil pangkat: " << hasil << std::endl;

    return 0;
}




