// Place even position nodes after odd position nodes

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

void evenAfterOdd(Node *&head)
{
    Node *odd = head;
    Node *even = head->next;
    Node *starteven = even;

    while (odd->next != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;

        even->next = odd->next;
        even = even->next;
    }

    odd->next = starteven;
    if (odd->next != NULL)
    {
        even->next = NULL;
    }
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
    insertAtLast(head, 5);
    insertAtLast(head, 6);
    display(head);

    evenAfterOdd(head);
    display(head);

    return 0;
}