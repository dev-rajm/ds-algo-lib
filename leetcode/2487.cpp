#include <bits/stdc++.h>
using namespace std;

ListNode *reverseNodes(ListNode *first)
{
    ListNode *p = first;
    ListNode *q = NULL;
    ListNode *r = NULL;
    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    return q;
}

ListNode *removeNodes(ListNode *head)
{
    ListNode *newHead = reverseNodes(head);
    ListNode *p = newHead;
    ListNode *q = p->next;
    while (q != NULL)
    {
        if (p->val > q->val)
            q = q->next;
        else
        {
            p->next = q;
            p = q;
            q = q->next;
        }
    }
    p->next = NULL;
    return reverseNodes(newHead);
}