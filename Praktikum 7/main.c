/*
Nama        : Victorio Cristiansa Putra
NIM         : 24060121130084
Lab			: B1
Nama File   : searchAlgo

*/

//Header file
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Searching.h"

//Fungsi Utama
int main(){
    //Kamus
    int C, X, n, i;
    int IXA;
    bool found;

    //Algoritma
    //Input Data yang dibutuhkan
    printf("Masukkan jumlah data array (harus integer positif): ");
    scanf("%d",&C); //Asumsi C pasti integer positif
    int A[C];
    for(i=0;i<C;i++){
            printf("Masukkan Elemen ke %d  :",i+1);
            scanf("%d",&A[i]);
    }
    printf("Masukkan nilai data yang ingin dicari : ");
    scanf("%d",&X);
    n = sizeof(A)/sizeof(A[0]);
    printf("------------------------------------------\n");
    printf("Sequential Search tanpa boolean  -->  ");
    SEQSearchX1(A, n, &IXA, X);
    printf("\n");
    printf("Sequential Search dengan boolean     -->  ");
    SEQSearchX2(A, n, X, &IXA, &found);
    return 0;
}
