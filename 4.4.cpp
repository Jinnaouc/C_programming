#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
int change(int a[5][5],int x, int y){
    if(x > 4 || y > 4 || x < 0 || y < 0)
        return 0;
    else {
    int b[5];
    for (int i = 0; i < 5; i ++) {
        b[i] = a[x][i];
    }
    
    for (int i = 0; i < 5; i ++) {
        a[x][i] = a[y][i];
        a[y][i] = b[i];
    }
        return 1;
    }
}
int main(){
    int change(int a[5][5], int x, int y);
    int a,b,c[5][5],e;

    for (int i = 0; i < 5 ; i ++) {
        for (int j = 0; j < 5; j ++) {
            scanf("%d",&c[i][j]);
        }
    }
    scanf("%d%d",&a,&b);
    e = change(c,a,b);
    if( e == 0)
        cout<< "error" << endl;
    else
        for (int i = 0; i < 5 ; i ++) {
            for (int j = 0; j < 5; j ++) {
                cout<< setw(4)<< c[i][j];
            }
            cout <<endl;
        }
    return 0;
}