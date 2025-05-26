#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

// Insert node in its correct position
Node *sortedInsert(Node *newnode, Node *sorted)
{
    if (sorted == NULL || sorted->data >= newnode->data)
    {
        newnode->next = sorted;
        sorted = newnode;
    }
    else
    {
        Node *curr = sorted;
        while (curr->next != NULL && curr->next->data < newnode->data)
        {
            curr = curr->next;
        }
        newnode->next = curr->next;
        curr->next = newnode;
    }
    return sorted;
}

// Sort the linked list
Node *sortList(Node *head)
{
    if (!head || !head->next)
        return head;

    Node *sorted = NULL;
    Node *curr = head;

    while (curr != NULL)
    {
        Node *next = curr->next;
        sorted = sortedInsert(curr, sorted);
        curr = next;
    }
    return sorted;
}

// Display linked list
void Display(Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int main()
{
    Node *head = new Node(-1);
    head->next = new Node(5);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(0);

    head = sortList(head);

    Display(head);

    return 0;
}
