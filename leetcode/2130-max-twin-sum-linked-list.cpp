#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int pairSum(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    ListNode *prev = NULL;
    ListNode *curr = slow;

    while (curr != NULL)
    {
        ListNode *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }

    ListNode *first = head;
    ListNode *second = prev;
    int max_sum = 0;
    while (second != NULL)
    {
        max_sum = max(max_sum, first->val + second->val);
        first = first->next;
        second = second->next;
    }

    return max_sum;
}