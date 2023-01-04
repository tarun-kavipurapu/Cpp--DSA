#include<bits/stdc++.h>
using namespace std;
template <typename T>
class Node{
public:
T data;
Node<T>*next;
Node(T data){
    this->data = data;
    next = NULL;
}

};
template <typename T>//shoulld be mentiooned for every class
class Stack{

Node<T>*head;
int size;
public:
Stack(){
head =NULL;
size = 0;
}
int getsize(){
return size;
}

bool isempty(){
return size == 0;//or we can use size==0
}

void push(T element){
Node<T>* temp =new Node<T>(element);
if(head == NULL){
    head = temp;
    size++;
}
else{
    temp->next = head;
    head = temp;
    size++;
}
}

T pop(){
    if(isempty()){
        return -1;
    }
Node<T>*temp = head;
int ans  = head->data;
head = head->next;
delete temp;
size--;
return ans;
}
T top(){
     if(isempty()){
        return -1;
    }
return head->data;
}
};

int main(){
Stack<char>s;
s.push(100);//ASCII values
s.push(101);
s.push(102);
s.push(103);
s.push(104);
s.push(105);
s.push(106);
cout<<s.getsize()<<endl;
cout<<s.top()<<endl;
cout<<s.pop()<<endl;
cout<<s.top()<<endl;
cout<<s.isempty()<<endl;
cout<<s.getsize()<<endl;

return 0;
}