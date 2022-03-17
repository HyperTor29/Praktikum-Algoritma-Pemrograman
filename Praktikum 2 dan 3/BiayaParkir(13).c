// Nama         : Victorio Cristiansa Putra
// NIM          : 24060121130084
// Nama Program : BiayaParkir.c
/* Deskripsi    : menampilkan besarnya biaya parkir berdasarkan lamanya parkir*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    //Kamus
    int t,biaya;
    char inisial;

    //Algoritma
    printf("Masukkan lama waktu parkir : ");
    scanf("%d",&t);
    if (t>-1 && t<= 2){
        biaya = 2000;
        printf("%d",biaya);
    }
    else {
        biaya = 2000 + ((t-2)*500);
        printf("%d",biaya);
    }
    return 0;
}
