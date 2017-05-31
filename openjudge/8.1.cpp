#include<stdio.h>
int main()
{
    int k = 0;
    int i = 0;
    scanf("%d",&k);
    int sum[k];
    for (int i = 0; i < k; i ++) {
        sum[i] = 0;
    }
    for (i = 0; i < k;i++)
    {
        int m, n;
        int d, t;
        scanf("%d", &m);
        scanf("%d", &n);
        
        int a[m][n];
        for (d = 0; d < m; d++)
        {
            for (t = 0; t < n; t++)
                scanf("%d", &a[d][t]);
        }
        if (m == 1 && n == 1) {
            sum[i] = a[0][0];
        }
        else{
            for (t = 0; t < n; t++)
                sum[i] += a[0][t];
            for (t = 0; t < n; t++)
                sum[i] += a[m - 1][t];
            for (d = 1; d < m - 1; d++)
                sum[i] += a[d][0];
            for (d = 1; d < m - 1; d++)
                sum[i] += a[d][n - 1];
        }
    }
    for(int i = 0; i < k; i ++)
        printf("%d\n",sum[i]);
    return 0;
}
