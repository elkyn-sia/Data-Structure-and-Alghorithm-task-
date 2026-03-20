#include <stdio.h>

int jumlah, i, valid = 0, tdk_valid = 0, lulus = 0;
float nilai_tulis, wawancara, nilai_akhir, total = 0, rata_rata;
char nama[50];
double max1 = 0, max2 = 0;

int main(){
    printf("Masukkan jumlah penawar: ");
    scanf("%d", &jumlah);
    for (i=1; i <= jumlah; i++){
        printf("\n=== Pelamar ke-%d ===", i);
        printf("\nMasukkan nama : ");
        scanf("%s", nama);
        printf("Masukkan nilai tes tulis: ");
        scanf("%f", &nilai_tulis);
        printf("Masukkan nilai wawancara: ");
        scanf("%f", &wawancara);
    
        if (nilai_tulis < 0 || nilai_tulis > 100 || wawancara < 0 || wawancara > 100){
            tdk_valid++;
            printf("DATA TIDAK VALID\n");
        }
        else{
            valid++;
            printf("DATA VALID\n");
            nilai_akhir = (0.6 * nilai_tulis) + (0.4 * wawancara);
            total += nilai_akhir;
            if (nilai_akhir >= 75) {
                lulus++;
                printf("Hasil: %s | Nilai Akhir: %.2f | Status: LULUS\n", nama, nilai_akhir);
                if (nilai_akhir > max1) {
                    max2 = max1;
                    max1 = nilai_akhir;
                } 
                else if (nilai_akhir > max2) {
                    max2 = nilai_akhir;
                }
            }
            else {
                printf("Hasil: %s | Nilai Akhir: %.2f | Status: TIDAK LULUS\n", nama, nilai_akhir);
            }
        }
    }

    if (valid > 0) {
        rata_rata = total / valid;
    }

    printf("\n=== HASIL ===\n");
    printf("Valid: %d, Tidak Valid: %d, Lulus: %d\n", valid, tdk_valid, lulus);
    printf("Rata-rata Nilai: %.2f\n", rata_rata);
    printf("Dua Nilai Tertinggi (Lulus): %.2f dan %.2f\n", max1, max2);

    return 0;
}