#include <stdio.h>
int main(){
    int m, n;
    scanf("%d%d",&m,&n);
    int a[m];
    for (int i = 0; i < m; i ++) {
        scanf("%d",&a[i]);
    }
    int b[n];
    for (int i = m - n; i < m; i ++) {
        b[i-m+n] = a[i];
    }
    
    for (int i = m-1; i > n-1 ; i --) {
        a[i] = a[i-n];
    }

    for (int i=0; i < n; i ++) {
        a[i] = b[i];
    }
    
    for (int i = 0; i < m; i ++) {
      printf("%d ",a[i]);
    }
    return 0;
}
