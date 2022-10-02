// Reverse K nodes of a LinkedList

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

Node *kReverse(Node *&head, int k)
{
    // First reverse k nodes using iterative method then reverse k+1 nodes using recursive method
    Node *prev = NULL;
    Node *curr = head;
    Node *next;

    int count = 0;
    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
        count++;
    }

    if (next != NULL)
    {
        head->next = kReverse(next, k);
    }

    return prev;
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
    int k = 2;
    Node *head = NULL;
    insertAtLast(head, 1);
    insertAtLast(head, 2);
    insertAtLast(head, 3);
    insertAtLast(head, 4);
    insertAtLast(head, 5);
    insertAtLast(head, 6);
    display(head);

    cout << endl;
    Node *newhead1 = kReverse(head, k);
    display(newhead1);
    return 0;
}