#include<bits/stdc++.h>
using namespace std;

void remrepet(char sr[]){
		if (sr[0] == '\0')
		{
			/* code */
			return;
		}
		if (sr[0] != sr[1])
		{
			/* code */
			
			return remrepet(sr + 1);//or you can remove else then you have to remove replace(a+1,p,q) in this line
		}


		if (sr[0]==sr[1])
		{
			int i = 1;
			for (; sr[i]!='\0'; i++)
			{
				sr[i - 1] = sr[i];
			}
				sr[i - 1] = sr[i];
				return remrepet(sr);
}
}
int main(){
	char str[100];

	cin >> str;
	

	remrepet(str);
	cout << str <<endl;
	return 0;
}