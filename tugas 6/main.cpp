#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>

using namespace std;
using namespace std::chrono;

// Algoritma Pengurutan

// Bubble Sort
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

// Selection Sort
void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

// Quick Sort
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

// Algoritma Pencarian

// Linear Search
int linearSearch(const vector<int>& arr, int target) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

// Binary Search (Recursive)
int binarySearchRecursive(const vector<int>& arr, int target, int low, int high) {
    if (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] > target) {
            return binarySearchRecursive(arr, target, low, mid - 1);
        }
        else {
            return binarySearchRecursive(arr, target, mid + 1, high);
        }
    }
    return -1;
}

int main() {
    // Menghasilkan array dengan angka acak
    const int SIZE = 10000;
    vector<int> arr(SIZE);
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100000;
    }

    // Sorting dan mencatat waktu eksekusi
    vector<int> arrBubble = arr;
    auto start = high_resolution_clock::now();
    bubbleSort(arrBubble);
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);
    cout << "Bubble Sort selesai dalam " << duration.count() << " milidetik\n";

    vector<int> arrSelection = arr;
    start = high_resolution_clock::now();
    selectionSort(arrSelection);
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start);
    cout << "Selection Sort selesai dalam " << duration.count() << " milidetik\n";

    vector<int> arrQuick = arr;
    start = high_resolution_clock::now();
    quickSort(arrQuick, 0, arrQuick.size() - 1);
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start);
    cout << "Quick Sort selesai dalam " << duration.count() << " milidetik\n";

    // Pencarian dan mencatat waktu eksekusi
    int target = arr[rand() % SIZE];  // Pilih angka acak sebagai target

    start = high_resolution_clock::now();
    int linearIndex = linearSearch(arr, target);
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start);
    if (linearIndex != -1) {
        cout << "Linear Search: Angka ditemukan pada indeks " << linearIndex << ". ";
    } else {
        cout << "Linear Search: Angka tidak ditemukan. ";
    }
    cout << "Waktu eksekusi: " << duration.count() << " milidetik\n";

    sort(arr.begin(), arr.end());  // Mengurutkan array untuk Binary Search

    start = high_resolution_clock::now();
    int binaryIndex = binarySearchRecursive(arr, target, 0, arr.size() - 1);
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start);
    if (binaryIndex != -1) {
        cout << "Binary Search: Angka ditemukan pada indeks " << binaryIndex << ". ";
    } else {
        cout << "Binary Search: Angka tidak ditemukan. ";
    }
    cout << "Waktu eksekusi: " << duration.count() << " milidetik\n";

    return 0;
}

