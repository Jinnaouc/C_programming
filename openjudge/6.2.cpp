#include <iostream>
using namespace std;
int main(){
    for (int p = 1; p < 5; p ++) {
        for (int d = 1; d < 5; d ++) {
            for (int t = 1; t < 5; t ++) {
                for (int h = 1; h < 5; h ++) {
                    if(p != d && p != t && p != h && d != t && d != h && t != h
                       && (((d == 1)+ (h == 4) + (p == 3)) ==1)
                       && (((h == 1) + (d == 4) + (p == 2) + (t ==3)) ==1)
                       &&(((h == 4) + (d == 3)) == 1)
                       && (((p == 1) + (t == 4) + (h == 2) + (d == 3)) == 1)
                       ){
                        cout << p << endl;
                        cout << d << endl;
                        cout << t << endl;
                        cout << h << endl;
                    }
                }
            }
        }
    }
    return 0;
}
