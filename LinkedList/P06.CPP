// Append last k nodes to the start of LinkedList

#include <bits/stdc++.h>
using namespace std;

// A class Node having 3 objects:- data, next and prev
class Node
{
public:
    int data;
    Node *next, *prev;

    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

int lengthList(Node *head)
{
    Node *temp = head;

    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

Node *appendNode(Node *&head, int k)
{
    Node *tail = head;
    Node *newtail;
    Node *newhead;

    int l = lengthList(head);
    k = k % l; // if k>l

    int count = 1;
    while (tail->next != NULL)
    {
        if (count == l - k)
            newtail = tail;
        if (count == l - k + 1)
            newhead = tail;

        tail = tail->next;
        count++;
    }

    newtail->next = NULL;
    tail->next = head;
    return newhead;
}

void insertAtLast(Node *&head, int val)
{
    Node *node = new Node(val);

    if (head == NULL)
    {
        head = node;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = node;
    node->prev = temp;
}

void display(Node *head)
{
    if (head == NULL)
    {
        cout << "Nothing to show";
        return;
    }

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    int k = 3;
    Node *head = NULL;
    insertAtLast(head, 1);
    insertAtLast(head, 2);
    insertAtLast(head, 3);
    insertAtLast(head, 4);
    insertAtLast(head, 5);
    insertAtLast(head, 6);
    display(head);

    Node *newhead = appendNode(head, k);
    display(newhead);
    return 0;
}