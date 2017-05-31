#include <iostream>
using namespace std;
int main(){
    int n,m = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i ++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i ++) {
        if (a[i] == i) {
           cout << a[i] << endl;
            m ++;
            break;
        }
    }
    if(m == 0)
    cout << "N" <<endl;
    return 0;
}

