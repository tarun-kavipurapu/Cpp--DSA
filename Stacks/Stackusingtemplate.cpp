#include<bits/stdc++.h>
using namespace std;
template<typename T>
class stackusingarrays{
    T *data;
    int index;
    int capacity;
    public:
    stackusingarrays(){
    capacity = 4;
    data = new T[capacity];
    index = 0;
    
    }
    int size(){
        return index;
    }
    bool isempty(){
        return index==0; 
    }
    T top(){
        return data[index-1];
    }
    void push(T element){
        if(capacity >= index){
            T *newdata = new T[2*capacity];
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
        T  pop(){
        if(isempty()){
            cout<<"STACK IS EMPTY";
            return 0;
        }
        index--;
        return data[index];
    }
};
int main(){
stackusingarrays<char>s;
s.push(100);//ASCII values
s.push(101);
s.push(102);
s.push(103);
s.push(104);
s.push(105);
s.push(106);
cout<<s.size()<<endl;
cout<<s.top()<<endl;
cout<<s.pop()<<endl;
cout<<s.top()<<endl;
cout<<s.isempty()<<endl;
cout<<s.size()<<endl;

return 0;
}