#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;
int main(){
	int n, k = 0;
    float degree;
	cin >> n  >> degree;
	int id[n];
	float a[n][2];
	for(int i = 0; i < n; i ++){
		for(int j = 0; j < 2; j ++){
			cin >> a[i][j];
		}
	}
	for(int i = 0;i < n; i ++){
		if(a[i][1] >= degree){
			id[k] = i;
			k ++;
		}

	}
    if (k == 0) {
        cout << "None." << endl;
    }
    else{
    float output[k][2];
	for(int i = 0; i < k; i ++){
		for(int j = 0; j < n; j ++){
			if( j == id[i]){
				output[i][0]=a[id[i]][0];
                output[i][1]=a[id[i]][1];
			}
		}
	}
    
    float max;
    int max_id;
    for(int i = 0; i < k; i ++){
        for (int j = 0; j < k - i - 1; j ++) {
            if(output[j][1] > output[j + 1][1]){
                max_id = output[j][0];
                max = output[j][1];
                output[j][0] = output[j + 1][0];
                output[j][1] = output[j + 1][1];
                output[j + 1][1] = max;
                output[j + 1][0] = max_id;
            }
        }
    }
    int intout[k];
    for (int i = 0; i < k; i ++) {
        intout[i] = (int)output[i][0];
    }
    
    cout<<setiosflags(ios::fixed)<<setprecision(1);
    for (int i = k - 1; i >=0 ; i -- ) {
        printf("%03d",intout[i]);
        cout << " " <<output[i][1] << endl;
    }
    }
return 0;
    

}
