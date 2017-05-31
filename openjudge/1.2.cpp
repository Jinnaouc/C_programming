#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int a[10];
    int max, b = 0, k = 0, q = 0;
    for (int i = 0; i < 10; i ++) {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 10; i ++) {
        if (a[i] % 2 == 1) {
            b ++;
        }
    }
    int odd[b];
    int even[10-b];
    for (int i = 0; i < 10; i ++) {
        if (a[i] % 2 == 1) {
            odd[k] = a[i];
            k++;
            }
        else
        {even[q] = a[i];
            q++;
        }
        
    }
    for (int i = 0; i < b; i ++) {
        for (int j = 0; j < b - i; j ++) {
            if (odd[j] > odd[j+1]) {
                max = odd[j];
                odd[j] = odd[j+1];
                odd[j + 1] = max;
            }
        }
    }
    
    for (int i = 0; i < q; i ++) {
        for (int j = 0; j < q - i; j ++) {
            if (even[j] > even[j+1]) {
                max = even[j];
                even[j] = even[j+1];
                even[j + 1] = max;
            }
        }
    }
    for (int i = 0; i < b; i ++) {
        printf("%d ",odd[i]);
    }
    for (int i = 0; i < 10 - b; i ++) {
        printf("%d ",even[i]);
    }
    
}

