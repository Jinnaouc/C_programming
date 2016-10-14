#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[6],n;
    for (int i = 0; i < 6; i ++) {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 6; i ++) {
        if(a[i] % 2 == 0)
            n ++;
    }
    int even[n],odd[6-n],m = 0, q = 0;
    for (int i = 0; i < 6; i ++) {
        if (a[i] % 2 == 0) {
            even[m] = a[i];
            m ++;
        }
        else{
            odd[q] = a[i];
            q ++;
        }
    }
    int min = even[0], max = odd[0];
    for (int i = 0; i < n; i ++) {
        if (min > even[i]) {
            min = even[i];
        }
    }
    for (int i = 0; i < 6 - n; i ++) {
        if (max < odd[i]) {
            max = odd[i];
        }
    }
    printf("%d", abs(max - min));
    return 0;
}
