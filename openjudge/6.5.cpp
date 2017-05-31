#include <iostream>
using namespace std;
int main(){
    int n,m,sum = 0;
    cin >> n;
    if(n > 100)
        return 0;
    char str[n][n];
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j ++) {
            cin >> str[i][j];
        }
    }
    cin >> m;
    if(m > 100)
        return 0;
    
    for (int i = 1; i < m; i ++) {
        for (int j = 0; j < n; j ++) {
            for (int k = 0; k < n; k ++) {
                if (str[j][k] == '@') {
                    if(str[j+1][k] != '#' && str[j+1][k] != '@' && j + 1 < n)
                    str[j+1][k] = 'a';
                    if(str[j-1][k] != '#' && str[j-1][k] != '@' && j - 1 >= 0)
                    str[j-1][k] = 'a';
                    if(str[j][k-1] != '#' && str[j][k-1]  != '@' && k - 1 >=0)
                    str[j][k-1] = 'a';
                    if(str[j][k+1] != '#' && str[j][k+1] != '@' && k + 1 < n)
                    str[j][k+1] = 'a';
                }
            }
        }
        for (int j = 0; j < n; j ++) {
            for (int k = 0; k < n; k ++) {
                if(str[j][k] == 'a')
                    str[j][k] = '@';
            }
        }
    }

    
    
    for (int j = 0; j < n; j ++) {
        for (int k = 0; k < n; k ++) {
            if(str[j][k] == '@')
                sum ++;
        }
    }
    cout << sum;
    return 0;
}
