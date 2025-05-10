#include <bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int> &A, int n)
{
    int i, j, flag;
    for (int i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                swap(A[j], A[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
            break;
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
    vector<int> A = {3, 7, 9, 10, 6, 5, 12, 4, 11, 2};
    int size = 10;

    cout << "Original Arr" << "\n";
    Display(A);

    BubbleSort(A, size);

    cout << "Sorted Arr" << "\n";
    Display(A);
}