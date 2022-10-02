// Queue using Array

#include <bits/stdc++.h>
using namespace std;

#define n 20

class Queue
{
public:
    int *arr;
    int front;
    int rear;

    Queue()
    {
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    void push(int x)
    {
        if (rear == n - 1)
        {
            return;
        }
        rear++;
        arr[rear] = x;

        if (front == -1) // if the first element is being inserted
            front++;
    }

    void pop()
    {
        if (front == -1 || front > rear)
            return;

        front++;
    }

    int peek()
    {
        if (front == -1 || front > rear)
            return -1;

        return arr[front];
    }

    bool empty()
    {
        if (front == -1 || front > rear)
            return true;
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