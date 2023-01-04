#include<bits/stdc++.h>
using namespace std;
int binarysearch(vector<int> v , int x){
  int low = 0;
  int high = v.size() - 1;
  while(low<=high){
    int mid = (low + high) / 2;

    if(v[mid] == x){
      return mid;
    }
    else if (v[mid]<x)
    {
      /* code */
      low = mid + 1;
    }
    else{
      high = mid - 1;
    }
  
  }
}

void print(vector<int>v){
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i]<<" ";
  }
}
int main(){
  vector<int> v{1,75,6,78,9,5,6,7,3};
  sort(v.begin(), v.end());
  
  
  print(v);
  cout << endl;
  cout<<binarysearch(v, 75);

  return 0;
}