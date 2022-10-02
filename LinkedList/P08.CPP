// Merge 2 sorted LinkedLists

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

// METHOD-1(ITERATIVE APPROACH)
Node *merge(Node *&head1, Node *&head2)
{
    Node *ptr1 = head1;
    Node *ptr2 = head2;
    Node *dummynode = new Node(-1);
    Node *ptr3 = dummynode;

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->data <= ptr2->data)
        {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }

        else
        {
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }

    while (ptr1 != NULL)
    {
        ptr3->next = ptr1;
        ptr1 = ptr1->next;
        ptr3 = ptr3->next;
    }
    while (ptr2 != NULL)
    {
        ptr3->next = ptr2;
        ptr2 = ptr2->next;
        ptr3 = ptr3->next;
    }

    return dummynode->next;
}

// METHOD-2(RECURSIVE APPROACH)
Node *recurmerge(Node *&head1, Node *&head2)
{
    Node *res;

    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }

    if (head1->data <= head2->data)
    {
        res = head1;
        res->next = recurmerge(head1->next, head2);
    }
    else
    {
        res = head2;
        res->next = recurmerge(head1, head2->next);
    }

    return res;
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

    int a1[] = {1, 4, 5, 7};
    int a2[] = {2, 3, 6};
    for (int i = 0; i < 4; i++)
    {
        insertAtTail(head1, a1[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        insertAtTail(head2, a2[i]);
    }

    display(head1);
    display(head2);
    cout << endl;
    Node *newhead1 = merge(head1, head2);
    display(newhead1);
    cout << endl;
    Node *newhead2 = recurmerge(head1, head2);
    display(newhead2);

    return 0;
}