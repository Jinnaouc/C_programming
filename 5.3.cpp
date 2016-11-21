#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
int main(){
    int n, num = 0,sum = 0;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        sum += i;
    }
    double a[n][2], b[sum],max = 0;
    for(int i = 0; i < n; i ++){
        for (int j = 0; j < 2; j ++) {
            cin >> a[i][j];
        }
    }
    
    for (int i = 0; i < n; i ++) {
        for (int j = i +1; j < n; j ++) {
            b[num] = sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0]) +(a[i][1]-a[j][1])*(a[i][1]-a[j][1]));
            num ++;
        }
    }
    for (int i = 0; i < num; i ++) {
        if (max < b[i])
            max =  b[i];
    }
    printf("%.4lf\n",max);
    return 0;
}

