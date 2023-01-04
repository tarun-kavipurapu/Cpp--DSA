#include<bits/stdc++.h>
using namespace std;

int digits(int n){
  int r = n % 10;
  if(n<1){
    return 0;
  }
  return  1 +digits(n / 10);
}
int main(){
  cout << digits(2);
  return 0;
}