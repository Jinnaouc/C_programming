#include <iostream>
using namespace std;
int main(){
    char str[80];
    int a_num = 0, e_num = 0, i_num = 0, o_num = 0, u_num = 0;
    cin.getline(str,80,'\n');
    for (int i = 0; str[i] != '\0'; i ++) {
        if(str[i] == 'a')
            a_num ++;
        else if(str[i] == 'e')
            e_num ++;
        else if(str[i] == 'i')
            i_num ++;
        else if(str[i] == 'o')
            o_num ++;
        else if(str[i] == 'u')
            u_num ++;
    }
    cout << a_num << ' ';
    cout << e_num << ' ';
    cout << i_num << ' ';
    cout << o_num << ' ';
    cout << u_num << ' ';
    return 0;
}
