#include <iostream>
using namespace std;
int main(){
    int i = 0, j = 0,a[501];
    char str[501];
    cin.getline(str,500,'\n');
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            a[j] = i;
            j ++;
        }
        i ++;
    }
    if(j == 0){
        for (int k = i-1; k >= 0; k --) {
            cout << str[k];
        }
    }
    else{
        for (int k = 0; k < j; k ++) {
            if (k == 0) {
                for (int m = a[k] - 1; m >=0; m --)
                    cout << str[m];
                }
                else{
                    for (int m = a[k] - 1; m > a[k - 1] ; m --)
                        cout << str[m];
                }
            cout << " ";
        }
        for (int k = i; k > a[j-1]; k --) {
            cout << str[k] ;
        }
    }
    cout << endl;
    return 0;
}

