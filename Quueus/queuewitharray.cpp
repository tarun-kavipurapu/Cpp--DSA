#include<bits/stdc++.h>
using namespace std;
template <typename T>

class queuearray{
T* data;
int nextindex;
int firstindex;
int size,capacity;
public:
queuearray(int s){
size = 0;
data = new T[s];
firstindex = -1;
nextindex = 0;
capacity =s;

}
void enqueue(T element){
if(size == capacity){
cout<<"Queue is full"<<endl;
}
data[nextindex] = element;
if(firstindex ==-1){
firstindex=0;
}
nextindex=(nextindex+1)%capacity;//!this basicallly indiccates the circualr natures of the queues
size++;
}

T front(){
    if(isempty()){
        cout<<"Queue is empty";
        return 0;
    }
return data[firstindex];
}
T dequeue(){
    if(isempty()){
        cout<<"Queue is empty"<<endl;
    }
firstindex++;
size--;
if(size==0){
    firstindex=-1;
    nextindex=0;
}
return data[firstindex-1];
}
int getsize(){
return size;
}
bool isempty(){
    return (size)==0;
}


};
int main(){
queuearray<int>q(10);
q.enqueue(100);
q.enqueue(101);
q.enqueue(102);
cout<<q.front()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.front()<<endl;
cout<<q.isempty();

return 0;
}