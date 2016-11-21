#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m = 0;
    vector<int>a;
    while(cin >> n){
        m ++;
    if (n % 3 == 0) {
        if(n % 5 == 0){
            if (n % 7 == 0) {
                a.push_back(1);
            }
            else
                a.push_back(2);
        }
        else if(n % 7 == 0)
            a.push_back(3);
        else
            a.push_back(4);
    }
    else if(n % 5 == 0){
        if(n % 7 == 0)
            a.push_back(5);
        else a.push_back(6);
    }
    else if( n % 7 == 0)
        a.push_back(7);
    else a.push_back(8);
    }
    
    for (int i = 0; i < m; i ++) {
        if(a[i] == 1){
            printf("3 5 7");
            printf("\n");
        }
        if(a[i] == 2){
            printf("3 5");
            printf("\n");
        }
        if(a[i] == 3){
            printf("3 7");
            printf("\n");
        }
        if(a[i] == 4){
            printf("3");
            printf("\n");
        }
        if(a[i] == 5){
            printf("5 7");
            printf("\n");
        }
        if (a[i] == 6){
            printf("5");
            printf("\n");
        }
        if(a[i] == 7){
            printf("7");
            printf("\n");
        }
        if(a[i] == 8){
            printf("n");
            printf("\n");}
    }
    return 0;
}
