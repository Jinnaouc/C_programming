#include <stdio.h>
int main(){
    int m,n,k = 0;
    scanf("%d%d",&m,&n);
    int a[m];
    for (int i = 0; i < m; i ++) {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < m; i ++) {
        for (int j = i + 1; j < m; j ++) {
            if (a[i] + a[j] == n)
                k ++;
        }
    }
    if (k == 0)
        printf("no\n");
    else
        printf("yes\n");
    return 0;
}