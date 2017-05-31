#include <stdio.h>
int main(){
    int n;
    float a = 0,b = 0,c = 0,d = 0;
    scanf("%d",&n);
    int age[n];
    for (int i = 0; i < n; i ++) {
        scanf("%d",&age[i]);
    }
    for (int i = 0; i < n; i ++) {
        if (age[i] < 19){
            a ++;
        }
        else if(age[i] < 36){
            b ++;
        }
        else if(age[i] < 61){
            c ++;
        }
        else{
            d ++;
        }
    }
    a = a / n * 100;
    b = b / n * 100;
    c = c / n * 100;
    d = d / n * 100;
    printf("1-18: %4.2f%%\n",a);
    printf("19-35: %4.2f%%\n",b);
    printf("36-60: %4.2f%%\n",c);
    printf("60-: %4.2f%%\n",d);
    return 0;
}

