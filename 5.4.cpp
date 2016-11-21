#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    int m, n, sum;
    char c;
    scanf("%d%d",&m,&n);
    cin >> c;
    switch (c) {
        case '+':
            sum = m + n;
            printf("%d",sum);
            break;
        case '-':
            sum = m - n;
            printf("%d",sum);
            break;
            
        case '*':
            sum = m * n;
            printf("%d",sum);
            break;
            
        case '/':
            if(n == 0)
                printf("Divided by zero!");
            else{
                sum = m / n;
                printf("%d",sum);
            }
            break;
        default:
            printf("Invalid operator!");
            break;
    }
    return 0;
}
