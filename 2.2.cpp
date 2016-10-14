#include <stdio.h>
int main(){
    int a,b,n,x,y;
    scanf("%d%d%d",&n,&x,&y);
    a = y / x;
    b = y % x;
    if(b != 0)
        a++;
    printf("%d",n -a);
    return 0;
}