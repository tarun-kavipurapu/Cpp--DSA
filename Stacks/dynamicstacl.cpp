#include<bits/stdc++.h>
using namespace std;
class stackusingarrays{
    int *data;
    int index;
    int capacity;
    public:
    stackusingarrays(){
    capacity = 4;
    data = new int[capacity];
    index = 0;
    
    }
    int size(){
        return index;
    }
    bool isempty(){
        return index==0; 
    }
    int top(){
        return data[index-1];
    }
    void push(int element){
        if(capacity >= index){
            int *newdata = new int[2*capacity];
            for (int i = 0; i < capacity; i++)
            {
                newdata[i] = data[i];
            }
             newdata[index] = element;
             index++;
             delete [] data;
            return;
        }
        data[index] = element;
        index++;
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
stackusingarrays s;
s.push(100);
s.push(200);
s.push(300);
s.push(400);
s.push(500);
s.push(600);
s.push(700);
cout<<s.size()<<endl;
cout<<s.top()<<endl;
cout<<s.pop()<<endl;
cout<<s.top()<<endl;
cout<<s.isempty()<<endl;
cout<<s.size()<<endl;

return 0;
}