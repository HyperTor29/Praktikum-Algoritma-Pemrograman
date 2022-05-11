// Nama : Victorio Cristiansa Putra
// NIM : 24060121130084
// Nama file : insertion_sort.c
// Tanggal : 10 Mei 2022
// Deskripsi : Membuat algoritma pengurutan dengan cara membandingkan dan mengurutkan dua data pertama pada array

#include <stdio.h>
#include "fungsi_arr.c"

void insertionSort(int arr[], int n){
    //Kamus lokal
    int i, j, key;

    //Algoritma
    for (i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main(){
    //Kamus lokal
    int arr[]={2,6,4,8,14,35,23,44,3,7};
    int n;

    //Algoritma
    n = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, n);
    insertionSort(arr, n);
    printArr(arr, n);

    return 0;
}
