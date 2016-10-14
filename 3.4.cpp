#include <stdio.h>
int main(){
    float a;
    scanf("%f",&a);
    if (a >= 95 && a <= 100)
        printf("1");
    else if(a >= 90)
        printf("2");
    else if( a >= 85)
        printf("3");
    else if( a >= 80)
        printf("4");
    else if( a >= 70)
        printf("5");
    else if( a >=60 )
        printf("6");
    else
        printf("7");
    return 0;
}
