// LINKED LIST IMPLEMENTATION OF QUEUE

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Queue
{
public:
    Node *front;
    Node *back;

    Queue()
    {
        front = NULL;
        back = NULL;
    }

    void push(int x)
    {
        Node *node = new Node(x);

        if (front == NULL)
        { // if first element is inserted
            front = node;
            back = node;
            return;
        }
        back->next = node;
        back = node;
    }

    void pop()
    {
        if (front == NULL)
        {
            cout << "Queue underflow";
            return;
        }

        Node *todelete = front;
        front = front->next;

        delete todelete;
    }

    int peek()
    {
        if (front == NULL)
        {
            cout << "Queue underflow";
            return -1;
        }

        return front->data;
    }

    bool empty()
    {
        if (front == NULL)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.empty();

    return 0;
}