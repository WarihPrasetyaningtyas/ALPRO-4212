//Pertemuan 8 Nomor 1
#include <iostream>
#include <vector>

// Fungsi untuk menguji apakah suatu bilangan adalah ganjil
bool isOdd(int number) {
    return number % 2 != 0;
}

// Prosedur untuk mencetak nilai genap terkecil dan indeksnya
void printSmallestEven(const std::vector<int>& numbers) {
    int smallestEven = 0;
    int smallestEvenIndex = -1;

    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] % 2 == 0) {
            if (smallestEvenIndex == -1 || numbers[i] < smallestEven) {
                smallestEven = numbers[i];
                smallestEvenIndex = i;
            }
        }
    }

    if (smallestEvenIndex != -1) {
        std::cout << "Nilai genap terkecil: " << smallestEven << std::endl;
        std::cout << "Indeks: " << smallestEvenIndex << std::endl;
    } else {
        std::cout << "Tidak ada bilangan genap dalam deret." << std::endl;
    }
}

int main() {
    std::vector<int> numbers;
    int n;

    std::cout << "Masukkan jumlah elemen deret: ";
    std::cin >> n;

    std::cout << "Masukkan elemen deret: ";
    for (int i = 0; i < n; i++) {
        int number;
        std::cin >> number;
        numbers.push_back(number);
    }

    printSmallestEven(numbers);

    return 0;
}
