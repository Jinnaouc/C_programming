#include <stdio.h>

int main(){
    int n,b;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i ++) {
        scanf("%d",&a[i]);
    }
    
    for (int i = 0; i < n; i ++) {
        int c = 0;
        while(a[i] != 0)
        {
            b = a[i] % 2;
            a[i] = a[i] / 2;
            if(b ==1)
                c++;
        }
        printf("%d\n",c);
    }
    return 0;
}

