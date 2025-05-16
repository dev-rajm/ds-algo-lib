#include <bits/stdc++.h>
using namespace std;

void QuickSort(vector<int> A, int l, int h)
{
    int j;

    if (l < h)
    {
        j = partition(A, l, h);
        QuickSort(A, l, j);
        QuickSort(A, j + 1, h);
    }
}

int partition(vector<int> &A, int l, int h)
{
    int pivot = A[l];
    int i = l, j = h;

    do
    {
        do
        {
            i++;
        } while (A[i] <= pivot);
        do
        {
            j--;
        } while (A[j] > pivot);

        if (i < j)
            swap(A[i], A[j]);
    } while (i < j);

    swap(A[l], A[j]);
    return j;
}

void Display(vector<int> A)
{
    for (int x : A)
        cout << x << " ";
    cout << "\n";
}

int main()
{
    vector<int> A = {3, 7, 9, 10, 6, 5, 12, 4, 11, 2, INT32_MAX};
    int n = 11;

    cout << "Original Arr" << "\n";
    Display(A);

    QuickSort(A, 0, n - 1);

    cout << "Sorted Arr" << "\n";
    Display(A);
}