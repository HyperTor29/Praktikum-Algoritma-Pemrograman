//Nama File : Array.c
//Deskripsi : Menghitung dan menampilkan besarnya
//penjumlahan sub array/tabel T.


#include <stdio.h>

int main(){
    // Kamus
    int k, l, m, sum;
    // Algoritma
    printf("Masukkan jumlah elemen: ");
    scanf("%d", &k);
    int T[k];
    sum = 0;

    for (l = 0; l < k; l++) scanf("%d", &T[l]);

    for (l = 0; l < k; l++) {
        printf("(");
        for (m = l; m < k; m++) {
            sum += T[m];
            if (m != k-1) printf("%d + ", T[m]);
            else printf("%d", T[m]);
        }
        if (l != k-1) printf(") + ");
        else printf(")");
    }
    printf("\nJumlah dari array dan subarraynya adalah: %d", sum);
    return 0;
}
