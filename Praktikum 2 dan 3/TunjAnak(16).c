// Nama         : Victorio Cristiansa Putra
// NIM          : 24060121130084
// Nama Program : TunjAnak.c
/* Deskripsi    : menampilkan besarnya tunjangan anak yang diberikan berdasarkan jumlah anak dengan jumlah maksimal yang ditanggung adalah 3 anak*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    //Kamus
    int anak,gaji, tunj;

    //Algoritma
    printf("Masukkan jumlah anak yang dimiliki : ");
    scanf("%d",&anak);
    printf("Masukkan jumlah gaji : ");
    scanf("%d", &gaji);
    if(anak>= 0 && gaji>0){
        if(anak<3){
            tunj = anak * 10 * gaji / 100;
            printf("%d",tunj);
        }
        else{
            tunj = 3 * 10 * gaji / 100;
            printf("%d",tunj);
        }
    }
    else{
        printf("Angka yang dimasukkan tidak valid");
    }
    return 0;
}
