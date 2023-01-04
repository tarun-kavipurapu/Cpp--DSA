#include<bits/stdc++.h>
using namespace std;
#include "node.cpp"

Node* Input1(){
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data!=-1){
        Node *newnode = new Node(data);//!we are alloting dynamically because the daata doesnot get deleted after pointer changes position
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else{
            tail ->next = newnode;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}

void print(Node*head){
   
    
    while (head!=NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    

}

int main(){
    Node *head = Input1();
    print(head);

    return 0;
}