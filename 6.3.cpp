#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int id[3],a0,a1,a2;
    float sum0, sum1, sum2, suma, sumb, sumc;
    cin >> id[0];
    cin >> a0;
    char b0[a0];
    float  c0[10];
    for (int i = 0; i < a0; i ++){
        cin >> b0[i] >> c0[i];
        sum0 += c0[i];
    }
    cin >> id[1];
    cin >> a1;
    char b1[a1];
    float c1[a1];
    for (int i = 0; i < a1; i ++){
        cin >> b1[i] >> c1[i];
        sum1 += c1[i];
    }
    cin >> id[2];
    cin >> a2;
    char b2[a2];
    float c2[a2];
    for (int i = 0; i < a2; i ++){
        cin >> b2[i] >> c2[i];
        sum2 += c2[i];
    }
    for (int i = 0; i < a0; i ++) {
        if (b0[i] == 'A')
            suma += c0[i];
        else if(b0[i] == 'B')
            sumb += c0[i];
        else
            sumc += c0[i];
    }
    
    for (int i = 0; i < a1; i ++) {
        if (b1[i] == 'A')
            suma += c1[i];
        else if(b1[i] == 'B')
            sumb += c1[i];
        else
            sumc += c1[i];
    }
    
    for (int i = 0; i < a2; i ++) {
        if (b2[i] == 'A')
            suma += c2[i];
        else if(b2[i] == 'B')
            sumb += c2[i];
        else
            sumc += c2[i];
    }
    int max = 0,max_id;
    for (int i = 0; i < 3; i ++) {
        if(max < id[i]){
            max = id[i];
            max_id = i;
        }
    }
    
    for (int i = 0; i < 3; i ++) {
        if(max == id[i])
            id[i] = 0;
    }
    
    int mid = 0, mid_id;
    for (int i = 0; i < 3; i ++) {
        if (mid < id[i]) {
            mid = id[i];
            mid_id = i;
        }
    }
    int min, min_id;
    for (int i = 0; i < 3; i ++) {
        if(id[i] != max && id[i] != mid && id[i] && id[i] != 0){
            min = id[i];
            min_id = i;
        }
    }
    cout<<setiosflags(ios::fixed)<<setiosflags(ios::right)<<setprecision(2);
    cout << min << " ";
    if(min_id == 0)
        cout << sum0 << endl;
    else if(min_id == 1)
        cout << sum1 <<endl;
    else
        cout << sum2 << endl;
    
    cout << mid << " ";
    if(mid_id == 0)
        cout << sum0 << endl;
    else if(mid_id == 1)
        cout << sum1 <<endl;
    else
        cout << sum2 << endl;
    
    cout << max << " ";
    if(max_id == 0)
        cout << sum0 << endl;
    else if(max_id == 1)
        cout << sum1 <<endl;
    else
        cout << sum2 << endl;
    
    cout << "A " << suma << endl;
    cout << "B " << sumb << endl;
    cout << "C " << sumc << endl;
    return 0;
}
