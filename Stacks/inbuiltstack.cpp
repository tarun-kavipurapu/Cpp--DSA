#include<bits/stdc++.h>
using namespace std;
int main(){
stack<int>s;
s.push(100);
s.push(200);
s.push(300);
s.push(400);
s.push(500);
cout<<!s.empty()<<endl;;
s.pop();
cout<<s.top();
return 0;
}