#include<bits/stdc++.h>
using namespace std;

void replace(char sr[],char p , char q){
		if (sr[0] == '\0')
		{
			/* code */
			return;
		}
		if (sr[0] == p)
		{
			/* code */
			sr[0] = q;
			return replace(sr + 1,p,q);//or you can remove else then you have to remove replace(a+1,p,q) in this line
		}
		else{
		return replace(sr + 1, p, q);
}
}
int main(){
	char str[100];
	char p;
	char q;
	cin >> str;
	cin >> p;
	cin >> q;

	replace(str,p,q);
	cout << str <<endl;
	return 0;
}