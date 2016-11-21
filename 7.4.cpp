#include <iostream>
using namespace std;
int main(){
    char str[100][101];
    int n = 1;
    for (int i = 0; cin.getline(str[i],101,'\n'); i ++) {
        while(str[i] == '('){
            while(str[i+n] != ')' && str[i + n] != '('){
                n++;
            }
            else if(str[i+n] == '('){
                continue;
            }
            else{
                str[i] = '.';
                str[i + n] = '.';
            }
        }
        
    }
    
}
