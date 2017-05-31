#include <stdio.h>
int main(){
    int n, m = 0;
    scanf("%d",&n);
    int a[n][n];
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j ++) {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 1; i < n -1; i ++) {
        for (int j = 1; j < n -1; j ++) {
            if((a[i][j]-a[i-1][j] <= -50 )&& (a[i][j] - a[i+1][j] <= -50) && (a[i][j]-a[i][j-1]<= -50) && (a[i][j]-a[i][j+1]<= -50))
                m++;
    }
    }
    printf("%d",m);
    return 0;
}
