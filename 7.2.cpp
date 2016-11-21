#include <iostream>
using namespace std;
int odd(int x){
    int a;
    a = x * 3 + 1;
    cout << x << "*3+1=" << a << endl;
    return a;
}

int even(int x){
    int a;
    a = x / 2;
    cout << x <<"/2=" <<a << endl;
    return a;
}
int main(){
    int m;
    cin >> m;
    if(m ==1){
        cout <<"End" << endl;
        return 0;
    }
    if(m <= 0)
        return 0;
    while (m != 1) {
        if (m % 2 == 1)
            m = odd(m);
        else
            m = even(m);
    }
    cout << "End" << endl;
    return 0;
}
