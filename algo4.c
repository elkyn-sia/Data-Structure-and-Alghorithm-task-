//KEISYA NABILA ANASTASIA ANSAR
//D121251044

#include <stdio.h>

int main (){
    int t, m, n, i, j, k;

    scanf("%d", &t);

    for (k = 0; k < t; k++){
        scanf("%d", &m);
        scanf("%d", &n);
        
        int cost[n];
        for (i = 0; i < n; i++){
            scanf("%d", &cost[i]);
        }

        int flag = 0;

        for (i = 0; i < n; i++){
            for (j = i + 1; j < n; j++){
                if (cost[i] + cost[j] == m){
                    printf("%d %d\n", i + 1, j + 1);
                    flag = 1;
                    break;
                }
            }
            if (flag == 1){
                break;
            }
        }
    }
    return 0;
}