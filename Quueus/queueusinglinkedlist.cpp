#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Node
{
public:
    T data;
    Node<T> *next;
    Node(T data)
    {
        this->data = data;
        next = NULL;
    }
};
template <typename T>
class queuell
{
    Node<T> *head;
    Node<T> *tail;
    int size;

public:
    queuell()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }
    bool isEmpty()
    {
        return size == 0;
    }
    int getSize()
    {
        return size;
    }
    T dequeue()
    {
        if (head == NULL)
        { //! we can use isempty too
            cout << "queue is empty" << endl;
            return 0;
        }
        else
        {
            T ans = head->data;
            Node<T> *temp = head;
            head = head->next;
            delete temp;
            size--;
            return ans;
        }
    }

    T front()
    {
        if (isEmpty())
        {
            return 0;
        }
        return head->data;
    }
    void enqueue(T element)
    {
        Node<T> *temp = new Node<T>(element);
        if (head == NULL)
        {
            head = temp;
            tail = temp;
            size++;
        }
        else
        {
            tail->next = temp;
            tail = temp;
            size++;
        }
    }
};

int main()
{
    queuell<int> q;
    q.enqueue(100);
    q.enqueue(200);
    q.enqueue(300);
    q.enqueue(400);

    cout<<q.front()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.front()<<endl;
    cout<<q.getSize()<<endl;
    return 0;
}
