#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<int> vi;

void swap(vi &arr, int l, int h)
{
    if (l >= h)
        return;
    int temp = arr[l];
    arr[l] = arr[h];
    arr[h] = temp;
    swap(arr, l + 1, h - 1);
}

void reverseArray(vi &arr)
{
    int n = arr.size();
    int l = 0, h = n - 1;
    swap(arr, l, h);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi vs(n);
        for (int i = 0; i < n; i++)
            cin >> vs[i];

        reverseArray(vs);
        for (int num : vs)
            cout << num << " ";
        cout << endl;
    }
}
