#include <stdio.h>
#include <string.h>
int main(){
    int tree_num,m ;
    scanf("%d",&tree_num);
    scanf("%d",&m);
    int a[m][2], tree[tree_num+1];
    int sum = 0;
    for (int i = 0; i < tree_num+1; i ++) {
        tree[i] = 1;
    }
    for (int i = 0; i < m; i ++) {
        for (int j = 0; j < 2; j ++) {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < m; i ++) {
        for (int j = a[i][0]; j < a[i][1] + 1; j ++) {
            tree[j] = 0;
        }
    }
    
    for (int i = 0; i < tree_num + 1; i ++) {
        sum += tree[i];
    }
    
    printf("%d",sum);
    return 0;
}