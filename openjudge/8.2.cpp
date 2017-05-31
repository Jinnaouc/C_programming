#include <iostream>
using namespace std;
int main(){
    int m, n;
    cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; i ++) {
        for (int j = 0; j < n; j ++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m + n - 1; i ++) {
        for (int j = 0; j < m; j ++) {
            if(i - j >= 0 && i - j <n){
                cout << a[j][i -j] << endl;
            }
        }
    }
    return 0;
}
