#include <bits/stdc++.h>
using namespace std;

void InsertionSort(vector<int> &A, int n)
{
    int i, j, x;
    for (int i = 1; i < n; i++)
    {
        j = i - 1;
        x = A[i];
        while (j > -1 && A[j] > x)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = x;
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

    InsertionSort(A, size);

    cout << "Sorted Arr" << "\n";
    Display(A);
}