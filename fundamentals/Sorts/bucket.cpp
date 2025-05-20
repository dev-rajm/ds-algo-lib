#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void Insert(Node *&bin, int value)
{
    Node *temp = new Node{value, nullptr};

    if (bin == NULL || value < bin->data)
    {
        temp->next = bin;
        bin = temp;
    }
    else
    {
        Node *current = bin;
        while (current->next != NULL && current->next->data < value)
            current = current->next;

        temp->next = current->next;
        current->next = temp;
    }
}

int Delete(Node *&bin)
{
    if (bin == NULL)
        return -1;

    Node *temp = bin;
    bin = bin->next;
    int x = temp->data;
    delete temp;
    return x;
}

void BucketSort(vector<int> &A)
{
    int max_ele, i, j;

    max_ele = *max_element(A.begin(), A.end());
    vector<Node *> Bins(max_ele + 1, nullptr);

    for (i = 0; i < A.size(); i++)
        Insert(Bins[A[i]], A[i]);

    i = 0;
    j = 0;

    while (i < max_ele + 1)
    {
        while (Bins[i] != nullptr)
            A[j++] = Delete(Bins[i]);
        i++;
    }
}

void Display(vector<int> A)
{
    for (int x : A)
        cout << x << " ";
    cout << "\n";
}

int main()
{
    vector<int> nums = {6, 8, 3, 10, 15, 6, 9, 12, 6, 3};

    cout << "Original array" << "\n";
    Display(nums);

    BucketSort(nums);

    cout << "Sorted array" << "\n";
    Display(nums);
}