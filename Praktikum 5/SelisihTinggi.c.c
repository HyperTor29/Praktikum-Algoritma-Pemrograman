//Nama File : SelisihTinggi.c
//Deskripsi : Menghitung dan menampilkan besarnya
// selisih ketinggian terbesar puncak bukut dengan lembah bukit atau sebaiknya



#include <stdio.h>

int main(){
    // Kamus
    int k, l, max, min;
    // Algoritma
    printf("Masukkan jumlah data: ");
    scanf("%d", &k);
    int T[k];

    for (l = 0; l < k; l++) scanf("%d", &T[l]);

    max = T[0];
    min = T[0];

    for (l = 0; l < k; l++) if (T[l] > max) max = T[l];

    for (l = 0; l < k; l++) if (T[l] < min) min = T[l];

    printf("Maksimum: %d\nMinimum: %d\nSelisih ketinggiannya adalah: %d", max, min, max-min);
    return 0;
}
