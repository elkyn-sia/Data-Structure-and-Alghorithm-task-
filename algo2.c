//KEISYA NABILA ANASTASIA ANSAR
//D121251044

#include <stdio.h>

int main(){
    int m, n, a, b;

    printf("Jumlah uang: ");
    scanf("%d", &m);
    printf("Jenis ice cream: ");
    scanf("%d", &n);

    int cost[n];

    for (a = 0; a < n; a++){
        printf("Harga ice cream ke-%d: ", a+1);
        scanf("%d", &cost[a]);
    }
    
    for (a = 0; a < n; a++){
        for (b = 1 + a; b < n; b++){
            if (cost[a]+cost[b] == m){
                printf("%d %d\n", a+1, b+1);
                return 0;
            }
        }

    }
    return 0;
}