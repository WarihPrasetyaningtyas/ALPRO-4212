//Array statis
#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    string jurusan;
    int tahunLulus;
};

int main() {
    const int jumlahMahasiswa = 4;
    Mahasiswa mahasiswa[jumlahMahasiswa];

    // Mengisi data mahasiswa
    mahasiswa[0] = {"A11.2022.01234", "Andi", "Broadcasting", 2023};
    mahasiswa[1] = {"A11.2010.01234", "Budi", "Sistem Informasi", 2013};
    mahasiswa[2] = {"A11.2000.01234", "Ali", "DKV", 2003};
    mahasiswa[3] = {"A11.1990.01234", "Siti", "Kesehatan", 1993};

    // Menampilkan data mahasiswa
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "NIM: " << mahasiswa[i].nim << endl;
        cout << "Nama: " << mahasiswa[i].nama << endl;
        cout << "Jurusan: " << mahasiswa[i].jurusan << endl;
        cout << "Tahun Lulus: " << mahasiswa[i].tahunLulus << endl;
        cout << endl;
    }

    return 0;
}

//array dinamis
#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    string jurusan;
    int tahunLulus;
};

int main() {
    int jumlahMahasiswa;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;

    Mahasiswa* mahasiswa = new Mahasiswa[jumlahMahasiswa];

    // Mengisi data mahasiswa
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Masukkan data mahasiswa ke-" << i+1 << ":" << endl;
        cout << "NIM: ";
        cin >> mahasiswa[i].nim;
        cout << "Nama: ";
        cin.ignore();
        getline(cin, mahasiswa[i].nama);
        cout << "Jurusan: ";
        getline(cin, mahasiswa[i].jurusan);
        cout << "Tahun Lulus: ";
        cin >> mahasiswa[i].tahunLulus;
        cout << endl;
    }

    // Menampilkan data mahasiswa
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Data mahasiswa ke-" << i+1 << ":" << endl;
        cout << "NIM: " << mahasiswa[i].nim << endl;
        cout << "Nama: " << mahasiswa[i].nama << endl;
        cout << "Jurusan: " << mahasiswa[i].jurusan << endl;
        cout << "Tahun Lulus: " << mahasiswa[i].tahunLulus << endl;
        cout << endl;
    }

    delete[] mahasiswa;

    return 0;
}
//Kedua program di atas menggunakan struktur Mahasiswa yang memiliki anggota-anggota (member) untuk menyimpan informasi mahasiswa. Program array statis menginisialisasi dan mengisi data mahasiswa secara langsung


