#include<bits/stdc++.h>
using namespace std;
int binar(vector<int>&v,int low , int high,int x){

if(high>=low){
 
   int mid = (low + high) / 2;
    
  if(v[mid] == x){
    return mid;
  }
  else if (v[mid]>x)
  {
    return binar(v,  low, (mid - 1),  x);
  }
  else {
    return binar(v, mid + 1, high, x);
  }
    
}
return -1;
}

int main(){
  

  vector<int> v{4 , 3 , 7 , 8 , 9,6};
  sort(v.begin(), v.end());
  int x;
  cin >> x;
  
   for (int i = 0; i < v.size(); i++)
  {
   
    cout << v[i]<<" ";
  }
  cout<<endl;
  cout<<binar(v, 0,v.size()-1, x);

  return 0;
}