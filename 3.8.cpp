#include <stdio.h>
int main(){
    int a, b[5],sum = 0;
    scanf("%d",&a);
    for (int i = 0; i < 5; i ++) {
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < 5; i ++) {
        if (b[i] < a)
        sum += b[i];
    }
    printf("%d\n",sum);
}
