#include <stdio.h>
int main(){
    int k,m = 0,n = 0,q = 0;
    scanf("%d",&k);
    int a[k];
    for(int i = 0;i < k;i ++){
        scanf("%d",&a[i]);
    }
    for(int i = 0; i <k;i ++) {
       if(a[i]==1)
           m++;
        else if(a[i] == 5)
            n++;
        else if(a[i]==10)
            q++;
    }
    printf("%d\n",m);
    printf("%d\n",n);
    printf("%d\n",q);
}

