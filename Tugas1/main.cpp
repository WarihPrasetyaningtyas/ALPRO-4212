/*  Warih Prasetyaningtyas
    NIM         : A11.2022.14454
    KKELOMPOK   : A11.4212


    PROJECT
    a. fungsi ppenjumlahan 2 bilangan
    b. fungsi pengurangan 2 bilangan
    c. fungsii untuk menghitung jumlah nilai total dari sebuah array
    d. fungsi menghitung rata-rata dari array tersebut
*/


#include <iostream>

using namespace std;

// fungsi penjumlahan 2 bil
int jumlah(int a,int b){
    return a+b;
}

// fungsi pengurangan 2 bil
int kurang(int a,int b){
    return a-b;
}

// fungsi minghitung jumlah nilai total dan rata-rata dari sebuah array
void hitung_total_dan_rata(int arr[], int &total, float &rata){
    total=0;
    for (int z=0; z<5; z++){
        total += arr[z];
    }
    rata = (float) total/5;
}

int main(){
// fungsi ppenjumlahan dan pengurangan
    int a,b;
    cout << "===========Masukkan Bilangan============" << endl;
    cout << "Bilangan 1:";
    cin >> a;
    cout << "Bilangan 2:";
    cin >> b;
    cout << "Hasil Penjumlahn :" << jumlah (a,b) << endl;
    cout << "=========================================" << endl;
    cout << "Hasil Pengurangan :" << kurang (a,b) << endl;
    cout << "=========================================" << endl;

    //Ex penggunaan fungsi hitung total dan rata-rata
    int arr[]={17,21,36,47,53};
    int total;
    float rata;
    hitung_total_dan_rata(arr, total, rata);

    cout << ".......Hitung Total dan Rata-Rata......." << endl;
    cout << "========================================" << endl;
    cout << "Total nilai array :" << total << endl;
    cout << "========================================" << endl;
    cout << "Rata-rata nilai array :" << rata << endl;


    return 0;
}
