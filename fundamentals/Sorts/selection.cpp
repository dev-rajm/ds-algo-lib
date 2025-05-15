#include <bits/stdc++.h>
using namespace std;

void SelectionSort(vector<int> &arr, int n)
{
    int i, j, k;
    for (i = 0; i < n - 1; i++)
    {
        for (j = k = i; j < n; j++)
        {
            if (arr[j] < arr[k])
                k = j;
        }
        swap(arr[i], arr[k]);
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

    SelectionSort(A, size);

    cout << "Sorted Arr" << "\n";
    Display(A);
    return 0;
}