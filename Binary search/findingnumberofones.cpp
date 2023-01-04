#include<bits/stdc++.h>
using namespace std;
int binaryfirstoccurance(vector<int>v){
    int low = 0;
    int high = v.size() - 1;
    while(low<=high){
        int mid = (high + low) / 2;
        if(v[mid]==0){
            low = mid + 1;
        }   
        
        else{
            if(mid==0||v[mid-1]!=v[mid]){
                return (v.size()-mid);
            }
            else{
                 high= mid - 1;
            }
        }

    }

    return -1;
}

int main(){
   /*  int x;
    cin >> x; */
    vector<int> v{0,0,0,1,1,1,1};
    cout << binaryfirstoccurance(v);
    return 0;
}