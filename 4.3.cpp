#include <iostream>
using namespace std;
int main(){
    char str[500];
    cin.getline(str,500,'.');
    int n = 0,max = 0,max_id;
    for (int i = 0; str[i] != '\0'; i ++) {
        if (str[i] != ' ') {
            n ++;
            if(n > max){
                max = n;
                max_id = i;
            }
        }
        else
            n = 0;
    }
    for (int i = 0; i < max; i ++) {
       cout << str[max_id - max + 1+ i];
    }
    return 0;
}
