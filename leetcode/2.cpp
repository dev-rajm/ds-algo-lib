#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

Node *addTwoNumbers(Node *p, Node *q)
{
    Node *result = new Node{0, NULL};
    Node *r = result;
    int carry = 0;

    while (p != NULL || q != NULL || carry > 0)
    {
        int x = p != NULL ? p->data : 0;
        int y = q != NULL ? q->data : 0;
        int sum = x + y + carry;

        carry = sum / 10;

        r->next = new Node{sum % 10, NULL};
        r = r->next;

        if (p != NULL)
            p = p->next;
        if (q != NULL)
            q = q->next;
    }
    return result->next;
}