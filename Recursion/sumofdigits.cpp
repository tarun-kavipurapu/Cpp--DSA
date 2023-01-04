#include<bits/stdc++.h>
using namespace std;

int sumofdigits(int n){
  int r = n % 10;
  if(n/10<1){
    return r;
  }
  return  r+sumofdigits(n/10);
}
int main(){
  cout << sumofdigits(45);
  return 0;
}