//WARIH PRASETYANINGTYAS (A11.2022.14454)
//Kelompok A11.4212

//TUGAS ALPRO 2

#include <iostream>
using namespace std;

//MAX
void max(int a, int b){
    if(a>b){
        cout << a << " lebih besar dari " << b << endl;
    }else{
        cout << b << " lebih besar dari " << a << endl;
    }
}

//MIN
void min(int a, int b){
    if(a<b){
        cout << a << " lebih kecil dari " << b << endl;
    }else{
        cout << b << " lebih kecil dari " << a << endl;
    }
}

//INT MAX
void MaxArray(int arr[], int n){
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout << "Nilai terbesar adalah " << max << endl;
}

//INT MIN
void MinArray(int arr[], int n){
    int min = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout << "Nilai terkecil adalah " << min << endl;
}

//BOOL isEven
bool isEven(int a){
    if(a%2==0){
        return true;
    }else{
        return false;
    }
}

//BOOL isOdd
bool isOdd(int a){
    if(a%2==1){
        return true;
    }else{
        return false;
    }
}

//BOOL isFactor
bool isFactor(int a, int b){
    if(b%a==0){
        return true;
    }else{
        return false;
    }
}

//INT SEARCH
void Search(int arr[], int n, int x){
    int i;
    for(i=0; i<n; i++){
        if(arr[i]==x){
            break;
        }
    }
    if(i<n){
        cout << x << " ditemukan pada index ke-" << i << endl;
    }else{
        cout << x << " tidak ditemukan" << endl;
    }
}

//BOOL iSFound
bool isFound(int arr[], int n, int x){
    int i;
    for(i=0; i<n; i++){
        if(arr[i]==x){
            break;
        }
    }
    if(i<n){
        return true;
    }else{
        return false;
    }
}

//INT SumEven
void SumEven(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        if(isEven(arr[i])){
            sum += arr[i];
        }
    }
    cout << "Jumlah bilangan genap adalah " << sum << endl;
}

//INT SumOdd
void SumOdd( int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        if(isOdd(arr[i])){
            sum += arr[i];
        }
    }
    cout << "Jumlah bilangan ganjil adalah " << sum << endl;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    max(2,3);
    min(2,3);
    MaxArray(arr,5);
    MinArray(arr,5);
    cout << isEven(4) << endl;
    cout << isOdd(4) << endl;
    cout << isFactor(4,8) << endl;
    Search(arr,5,2);
    cout << isFound(arr,5,2) << endl;
    SumEven(arr,5);
    SumOdd(arr,5);

    return 0;

}
