#include<bits/stdc++.h>//not completed
using namespace std;

void  check(string a){
    stack<char>s;
    char ans;
    int n = a.length();
    for (int i = 0; i < n; i++)
    {
        if(a[i] =='{'||a[i]=='['||a[i]=='('){
            s.push(a[i]);

        }
        else{

            if(!s.empty()){
                char temp=s.top();
                s.pop();
                if(a[i]='}'&&temp!='{'){
                    ans = false;
                    break;
                }
                if(a[i]=']'&&temp!='['){
                    ans = false;
                    break;
                }
                if(a[i]=')'&&temp!='('){
                    ans = false;
                    break;
                }

            }
        else{
            ans = false;
            break;
        }
        }


    }
    

}
int main(){

return 0;
}