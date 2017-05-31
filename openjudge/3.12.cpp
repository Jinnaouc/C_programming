#include <stdio.h>
int main(){
    int m,a,b;
    scanf("%d",&m);
    for (int i = 10; i <= m; i ++) {
        a = i / 10;
        b = i % 10;
        if( i % (a + b) == 0)
            printf("%d\n",i);
    }
    return 0;
}
