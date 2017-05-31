#include <iostream>
using namespace std;
int main(){
    int date[3];
    char a[2],b;
    cin >> date[0] >> a[0] >> date[1] >> a[1] >> date[2];
    if (date[0]  == 3200)
        b = 0;
    else
    {
        if(date[0] % 100 == 0){
            if( date[0] % 400 == 0)
                b = 1;
            else
                b = 0;
        }
        else
        {
            if(date[0] % 4 == 0)
                b = 1;
            else
                b = 0;
        }
    }
    
    if(date[1] == 02 && b == 1 && date[2] == 29){
            date[1] = 3;
            date[2] = 1;
    }
        else if(date[1] == 02 && b == 0 && date[2] == 28 ){
                date[1] = 3;
                date[2] = 1;
            }
    
        else if ((date[1] == 01 || date[1] == 03 || date[1] == 05 || date[1] == 07 || date[1] == 8 || date[1] == 10) && date[2]  == 31) {
            date[1]  ++;
            date[2] = 1;
        }
    
        else if(date[1] == 12 && date[2] == 31){
            date[0] ++;
            date[1] =1;
            date[2] = 1;
    }
    
        else if ((date[1] == 04 || date[1] == 06 || date[1] == 9 || date[1] == 11) && date[2] == 30) {
                date[1] ++;
                date[2] = 1;
        }
    else
        date[2] ++;
        printf("%d-%02d-%02d\n", date[0], date[1], date[2]);
    return 0;
}
