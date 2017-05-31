#include <stdio.h>
int fun(){
    int n,m,max = 0,max2 = 0;
    scanf("%d",&n);
    scanf("%d",&m);
    int a[n];
    for (int i = 0; i < n; i ++) {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < m - 1; i ++) {
        for (int j = 0; j < n; j ++) {
            if (a[j] > max) {
                max = a [j];
            }
        }
        for (int j = 0; j < n; j ++) {
            if(a[j] == max)
                a[j] = 0;
        }
        max = 0;
    }
    for (int i = 0; i < n ; i ++) {
        if(a[i] > max2)
            max2 = a[i];
    }
    return max2;
}
int main(){
    int output;
    output = fun();
    printf("%d\n",output);
    return 0;
}

