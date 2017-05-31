#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int id[n],initial,final;
    double rate[n];
    for (int i = 0; i < n; i ++) {
        scanf("%d",&id[i]);
        scanf("%d",&initial);
        scanf("%d",&final);
        rate[i] = (double)final / initial;
    }
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n - i - 1; j ++) {
            if (rate[j + 1] > rate[j]) {
                int tmp_id = id[j];
                id[j] = id[j+1];
                id[j + 1] =  tmp_id;
                double tmp_rate = rate[j];
                rate[j] = rate[j + 1];
                rate[j + 1] = tmp_rate;
            }
        }
    }
    
    double max_diff = 0;
    int max_diff_index = 0;
    for (int i = 0; i < n - 1; i ++) {
        double diff = rate[i] - rate[i + 1];
        if (max_diff < diff) {
            max_diff = diff;
            max_diff_index = i;
        }
    }
    
    printf("%d\n",max_diff_index + 1);
    for (int i = max_diff_index; i >= 0; i --) {
        printf("%d\n",id[i]);
    }
    printf("%d\n",n - max_diff_index - 1);
    for (int i = n - 1; i > max_diff_index; i --) {
        printf("%d\n",id[i]);
    }
    return 0;
}