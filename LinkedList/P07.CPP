// Find intersection point of 2 Linked lists

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

// Method to make intersected lists
void intersection(Node *&head1, Node *&head2, int pos)
{
    Node *ptr1 = head1, *ptr2 = head2;

    pos--;
    while (pos--)
    {
        ptr1 = ptr1->next;
    }

    while (ptr2->next != NULL)
    {
        ptr2 = ptr2->next;
    }
    ptr2->next = ptr1; // head2 k ennd mein at position pos head1 ko add kra rhe hain
}

int intersect(Node *&head1, Node *&head2)
{
    Node *ptr1, *ptr2;

    int l1 = lengthList(head1);
    int l2 = lengthList(head2);
    int d = 0;

    // We will place ptr1 at the head of the longer linkedlist
    if (l1 > l2)
    {
        d = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else
    {
        d = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }

    while (d)
    {
        d--;
        if (ptr1 == NULL)
        {
            return -1; // it means no intersection is there
        }
        ptr1 = ptr1->next;
    }

    while (ptr1 != NULL && ptr2 != NULL)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
        if (ptr1 == ptr2)
        {
            return ptr1->data;
        }
    }
    return -1;
}

void insertAtTail(Node *&head, int val)
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
    Node *head1 = NULL;
    Node *head2 = NULL;

    int a1[] = {1, 2, 3, 4, 5, 6};
    int a2[] = {9, 10};
    for (int i = 0; i < 6; i++)
    {
        insertAtTail(head1, a1[i]);
    }
    for (int i = 0; i < 2; i++)
    {
        insertAtTail(head2, a2[i]);
    }

    intersection(head1, head2, 4);
    display(head1);
    display(head2);
    cout << endl;
    cout << intersect(head1, head2);

    return 0;
}