// LinkedList Implementation

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

void insertAtBegin(Node *&head, int val)
{
    Node *node = new Node(val);

    if (head == NULL)
    {
        head = node;
        return;
    }

    node->next = head;
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
    temp->next = node;
}

// Here head is passed as reference coz we want to modify the LinkedList
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

void deleteBegin(Node *&head)
{
    if (head == NULL)
        return;

    Node *temp = head;
    head = temp->next;
    delete (temp);
}

void deleteRandom(Node *&head, int loc)
{
    Node *temp = head, *temp1;

    if (loc == 1)
    {
        deleteBegin(head);
        return;
    }
    for (int i = 0; i < loc; i++)
    {
        temp1 = temp;
        temp = temp->next;
        if (temp == NULL)
        {
            return;
        }
    }
    temp1->next = temp->next;
    delete temp;
}

void deleteLast(Node *&head)
{
    if (head == NULL)
        return;
    else if (head->next == NULL)
    {
        delete (head);
        head = NULL;
    }
    else
    {
        Node *temp = head;
        Node *temp1;
        while (temp->next != NULL)
        {
            temp1 = temp;
            temp = temp->next;
        }
        temp1->next = NULL;
        delete (temp);
    }
}

// Here head is passed as value not by reference coz we don't want to modify the LinkedList
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

bool search(Node *head, int key)
{
    if (head == NULL)
    {
        return false;
    }

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
            return true;
        temp = temp->next;
    }
    return false;
}

int main()
{
    Node *head = NULL;
    insertAtLast(head, 1);
    insertAtLast(head, 2);
    insertAtLast(head, 3);
    insertAtBegin(head, 6);
    insertAtBegin(head, 7);
    insertAtRandom(head, 9, 2);
    display(head);
    deleteBegin(head);
    display(head);
    deleteLast(head);
    display(head);
    deleteRandom(head, 4);
    display(head);
    cout << search(head, 4) << endl;
    cout << search(head, 2) << endl;

    return 0;
}