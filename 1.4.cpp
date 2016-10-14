#include <stdio.h>
int main(){
    int a,b,sum = 0;
    scanf("%d%d",&a,&b);
    do
    {
    if(a % 2 == 1)
        sum += a;
        a++;
    }while(a <= b);
    printf("%d\n",sum);
    return 0;
}
