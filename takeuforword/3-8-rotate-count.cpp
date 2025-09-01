#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt, n;
    cin >> tt;

    while (tt--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int low = 0, high = n - 1;
        while (low < high)
        {
            int mid = low + (high - low) / 2;
            if (arr[mid] > arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid;
            }
        }

        cout << low % n << nline;
    }
    return 0;
}