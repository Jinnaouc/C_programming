#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int n, a, b = 0;
    cin >> n;
    char word[41];
    for (int i = 0; i < n; i ++) {
        cin >> word;
        a = strlen(word);
        b += a;
        if (b < 80) {
            cout << word << " ";
            b ++;
        }
        else if(b == 80){
            cout << word << endl;
            b = 0;
        }
        else{
            cout << endl << word << " ";
            b = a + 1;
        }
    }
    return 0;
}
