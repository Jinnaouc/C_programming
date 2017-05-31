#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if (n  == 3200)
        printf("N");
    else
    {
    if(n % 100 == 0){
        if( n % 400 == 0)
            printf("Y");
        else
            printf("N");
    }
    else
    {
        if(n % 4 == 0)
            printf("Y");
        else
            printf("N");
    }
    }
    return 0;
}