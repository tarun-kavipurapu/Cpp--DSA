#include<bits/stdc++.h>
using namespace std;

void removex(char sr[]){
		if (sr[0] == '\0')
		{
			
			return;
		}
		if (sr[0] != 'x')
		{
			/* code */
			removex(sr + 1);
		}
		else 
		{
			int i = 1;
			for (; sr[i] != '\0'; i++)
			{
				sr[i - 1] = sr[i];
			}
				sr[i - 1] = sr[i];
				removex(sr);
}
}
int main(){
	char str[100];
	
	cin >> str;
	

	removex(str);
	cout << str <<endl;
	return 0;
}