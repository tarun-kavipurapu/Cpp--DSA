#include<bits/stdc++.h>
using namespace std;
class stackusingarrays{
    int *data;
    int index;
    int capacity;
    public:
    stackusingarrays(int totalsize){
    data = new int[totalsize];
    index = 0;
    capacity = totalsize;
    }
  
    bool isempty(){
        return index==0; 
    }
    int top(){
        return data[index-1];
    }
    void push(int element){
        if(capacity == index){
            cout<<"stack is full";
            return;
        }
        data[index] = element;
        index++;
    }
    int size(){
        return index;
    }
    int  pop(){
        if(isempty()){
            cout<<"STACK IS EMPTY";
            return INT_MIN;
        }
        index--;
        return data[index];
    }
};
int main(){
stackusingarrays s(20);
s.push(100);
s.push(200);
s.push(300);
s.push(400);
cout<<s.size()<<endl;
cout<<s.top()<<endl;
cout<<s.pop()<<endl;
cout<<s.top()<<endl;
cout<<s.isempty()<<endl;
cout<<s.size()<<endl;

return 0;
}