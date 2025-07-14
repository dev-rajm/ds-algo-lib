#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

struct ListNode
{
    int data;
    struct ListNode *next;
};

// T.C => O(N)
// S.C => O(1)
int getDecimalValue(ListNode *head)
{
    ListNode *p = head;
    int number = 0;
    while (p != NULL)
    {
        number = number * 2 + p->data;
        p = p->next;
    }
    return number;
}
