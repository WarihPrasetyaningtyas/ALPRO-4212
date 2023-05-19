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

//Pertemuan 8 nomor 2
#include <iostream>
#include <vector>

// Metode Selection Sort
void selectionSort(std::vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        std::swap(arr[i], arr[maxIndex]);
    }
}

// Metode Bubble Sort
void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    std::vector<int> arr {5, 4, 3, 2, 2, 1, 1};

    std::cout << "Array sebelum diurutkan: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    selectionSort(arr);
    std::cout << "Array setelah diurutkan dengan Selection Sort: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    bubbleSort(arr);
    std::cout << "Array setelah diurutkan dengan Bubble Sort: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
