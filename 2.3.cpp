#include <stdio.h>
#define Pi 3.14159
int main(){
    int h,r,V,n,m;
    scanf("%d%d",&h,&r);
    V = Pi * r * r * h;
    n = 20000 / V;
    m = 20000 % V;
    if(m != 0)
        n ++;
    printf("%d",n);
    return 0;
}
