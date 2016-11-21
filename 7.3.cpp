#include <iostream>
using namespace std;
int line(char array[101]){
    int sum = 0,charnum;
    int n;
    for (int i = 0; array[i] == '(' || array[i] == ')'; i ++){
        sum ++;}
    charnum = sum;
    int half = sum/2;
    int out[half][2];
    int m = 0;
    while(sum != 0) {
        for(int i = 0; i < charnum; i ++) {
            n = 1;
            if(array[i] == '('){
                if(array[i+1] == ')') {
                    out[m][0] = i;
                    out[m][1] = i + 1;
                    m ++;
                    array[i] = 'a';
                    array[i + 1] = 'a';
                    sum -= 2;
                }
                else if(array[i + 1] == '('){
                    continue;}
                else{
                    while(array[i + n] == 'a'){
                        n++;}
                    
                    if(array[i + n] == '('){
                        continue;}
                    else{
                        out[m][0] = i;
                        out[m][1] = i + n;
                        m ++;
                        array[i] = 'a';
                        array[i + n] = 'a';
                        sum -= 2;
                    }
                }
            }
            else
                continue;
        }
    }
    int max_id,max;
    for(int i = 0; i < half; i ++){
        for (int j = 0; j < half - i - 1; j ++) {
            if(out[j][1] > out[j + 1][1]){
                max_id = out[j][0];
                max = out[j][1];
                out[j][0] = out[j + 1][0];
                out[j][1] = out[j + 1][1];
                out[j + 1][1] = max;
                out[j + 1][0] = max_id;
            }
        }
    }
    for (int i = 0; i < half; i ++) {
        cout << out[i][0] << " " << out[i][1] << endl;
    }
    return 0;
}
int main(){
    char str[101];
    cin.getline(str,101,'\n');
    char sym;
    sym = str[0];
    for (int i = 0; str[i] != '\0'; i ++) {
        if (str[i] == sym) {
            str[i] = '(';
        }
        else
            str[i] = ')';
    }
    line(str);
    return 0;
}
