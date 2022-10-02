// Doubly LinkdeList Implementation

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

void insertAtBegin(Node *&head, int val)
{
    Node *node = new Node(val);

    if (head == NULL)
    {
        head = node;
        return;
    }

    node->next = head;
    head->prev = node;
    head = node;
}

void insertAtRandom(Node *&head, int val, int loc)
{
    Node *node = new Node(val);
    Node *temp = head;

    for (int i = 1; i < loc; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            return;
        }
    }
    node->next = temp->next;
    node->next->prev = node;
    temp->next = node;
    node->prev = temp;
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

void deleteBegin(Node *&head)
{
    if (head == NULL)
        return;

    Node *temp = head;

    head = head->next;
    head->prev = NULL;
    delete (temp);
}

void deleteRandom(Node *&head, int loc)
{
    Node *temp = head;

    if (loc == 1)
    {
        deleteBegin(head);
        return;
    }
    for (int i = 1; i < loc; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            return;
        }
    }
    temp->prev->next = temp->next;

    // When last node is not to be deleted
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }
    delete temp;
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
    insertAtBegin(head, 3);
    insertAtBegin(head, 5);
    insertAtRandom(head, 4, 3);
    deleteBegin(head);
    deleteRandom(head, 1);
    deleteRandom(head, 3);
    display(head);
    return 0;
}