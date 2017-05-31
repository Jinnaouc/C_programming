#include <stdio.h>
int main(){
    int money,a,b,c,d,e,f;
    scanf("%d",&money);
    a = money / 100;
    b = (money % 100) / 50;
    c = ((money % 100) % 50) / 20;
    d = (((money % 100) % 50) % 20) / 10;
    e = ((((money % 100) % 50) % 20) % 10) / 5;
    f = ((((money % 100) % 50) % 20) % 10) %5;
    printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
    return 0;
}

