#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    int n;
    float plus_time = 50.0;
    cin >> n;
    float a[n];
    float walk_time[n],bike_time[n];
    
    for(int i = 0; i < n; i ++){
        cin >> a[i];
    }
    
    for(int i = 0; i < n; i ++){
        walk_time[i] = a[i] / 1.2;
        bike_time[i] = a[i] / 3.0 + plus_time;
    if(walk_time[i] < bike_time[i])
        cout << "Walk" <<endl;
    else if(walk_time[i] == bike_time[i])
        cout << "All" << endl;
        else
            cout << "Bike" << endl;
    }
    return 0;
}