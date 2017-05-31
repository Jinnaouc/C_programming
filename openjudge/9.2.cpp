#include<iostream>
using namespace std;
int main(){
	int m,j = 0;
	cin >> m;
	char str[m][256];
	
	for(int i = 0; i < m; i ++){
		cin >> str[i];
	}

	for(int i = 0; i < m; i ++){
		for(int j = 0; str[i][j] != '\0'; j ++){
			if(str[i][j] == 'A')
				str[i][j] = 'T';
			else if(str[i][j] == 'C')
				str[i][j] = 'G';
			else if(str[i][j] == 'T')
				str[i][j] = 'A';
			else if(str[i][j] == 'G')
				str[i][j] = 'C';
		}
	}
	for(int i = 0; i < m; i ++)
		cout << str[i] << endl;
	return 0;
}
