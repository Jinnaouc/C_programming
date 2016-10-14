#include <stdio.h>
int main(){
    int N,M = 1;
    float K,sum = 200;
    scanf("%d%f",&N,&K);
    do {
        sum *= (100 + K) / 100;
        M ++;
        if (M > 20) {
            printf("Impossible\n");
            break;
        }
    } while (sum >= N * M);
    if(M <= 20)
    printf("%d\n",M);
    return 0;
}
