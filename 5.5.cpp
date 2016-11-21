#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int main(){
    
    
    char str[10], substr[3];
    int max_id, a = 0, i;
    cin.get(str,10,' ');
    char c = str[0];
    cin >> substr;
    
    for ( i = 0; str[i] != '\0'; i ++) {
        if (c < str[i]) {
            c = str[i];
            max_id = i;
        }
    }
    char output[i + 4];
    for (int j = 0; j < i + 3; j ++) {
        if(j <= max_id)
            output[j] = str[j];
            else if(j <= max_id + 3){
                output[j] = substr[a];
                a ++;
            }
        else
            output[j] = str[j - 3];
    }
    
        for (int j = 0; j < i + 3; j ++) {
            printf("%c",output[j]);
        }
        return 0;
}
