#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int length;
    cin >> length;
    int a[length];
    int max;
        for (int i = 0; i < length; i ++) {
            cin >> a[i];
        }
        for (int i = 0; i < length; i ++) {
            for(int j = 0;j < length - i; j++){
                if(a[j] > a[j+1]){
                    max = a[j];
                    a[j] = a[j+1];
                    a[j+1] = max;
                }
            }
        }
        for (int i = 0; i < length; i ++) {
            cout << a[i] << endl;
        }
        return 0;
}
