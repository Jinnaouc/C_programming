#include<iostream>
using namespace std;
int main(){
	int m, n;

	cin >> m >> n;
	int a[m+2][n+2];
	for(int i = 1; i < m+1; i ++){
		for(int j = 1;j < n+1; j ++){
			cin >> a[i][j];
		}
	}
    for (int j = 0; j <= n + 1; j ++) {
        a[0][j] = 0;
        a[m + 1][j] = 0;
    }
    
    for (int i = 1; i < m + 1; i ++) {
        for (int j = 0; j <= n + 1 ; j += n + 1) {
            a[i][j]=0;
        }
    }
    
    
	for(int i = 1; i < m + 1; i ++){
		for(int j = 1; j < n + 1; j ++){
			if((a[i][j] >= a[i+1][j]) && (a[i][j] >= a[i-1][j]) && (a[i][j] >= a[i][j+1]) && (a[i][j] >= a[i][j-1]) )
				cout << i-1 << " " << j-1 << endl;
		}
	}
	return 0;
}
