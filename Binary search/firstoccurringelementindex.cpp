#include<bits/stdc++.h>
using namespace std;
int binaryfirstoccurance(vector<int>v,int x){
    int low = 0;
    int high = v.size() - 1;
    while(low<=high){
        int mid = (high + low) / 2;
        if(v[mid]<x){
            low = mid + 1;
        }
        else if(v[mid]>x){
            high = mid - 1;
        }
        else{
            if(mid==0||v[mid-1]!=v[mid]){
                return mid;
            }
            else{
                 high= mid - 1;
            }
        }

    }

    return -1;
}

int main(){
    int x;
    cin >> x;
    vector<int> v{5,15,15,15,20,20,20};
    cout << binaryfirstoccurance(v, x);
    return 0;
}