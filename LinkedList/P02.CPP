// Reverse a LinkedList

#include <bits/stdc++.h>
using namespace std;

// A class Node having 2 objects:- data and next
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

// METHOD-1(ITERATIVE APPROACH)
Node *iterReverse(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *next;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    return prev;
}

// METHOD-2(RECURSIVE APPROACH)
Node *recurReverse(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *newhead = recurReverse(head->next);
    head->next->next = head;
    head->next = NULL;

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
    Node *head = NULL;
    insertAtLast(head, 1);
    insertAtLast(head, 2);
    insertAtLast(head, 3);
    insertAtLast(head, 4);
    display(head);

    cout << endl;
    // Node *newhead = iterReverse(head);
    // display(newhead);
    // cout<<endl;

    Node *newhead1 = recurReverse(head);
    display(newhead1);
    return 0;
}