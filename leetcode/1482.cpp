#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

bool possible(vector<int> arr, int day, int m, int k)
{
    int cnt = 0, num_bouquet = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= day)
        {
            cnt++;
        }
        else
        {
            num_bouquet += (cnt / k);
            cnt = 0;
        }
    }
    num_bouquet += (cnt / k);
    if (num_bouquet == m)
        return true;
    else
        return false;
}

int minDays(vector<int> &arr, int m, int k)
{
    int n = arr.size();
    if (m * k > n)
        return -1;
    for (int i = *min_element(all(arr)); i <= *max_element(all(arr)); i++)
    {
        if (possible(arr, i, m, k) == true)
        {
            return i;
        }
    }
    return -1;
}

int minDays1(vector<int> &arr, int m, int k)
{
    int n = arr.size();
    if (m * k > n)
        return -1;
    ll low = *min_element(all(arr));
    ll high = *max_element(all(arr));
    while(low <= high) {
        ll mid = low + (high - low) / 2;
        if(possible(arr, mid, m, k)) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return low;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt, n, m, k;
    cin >> tt;

    while (tt--)
    {
        cin >> n >> m >> k;
        vector<int> arr(n);
        for (int &x : arr)
            cin >> x;

        cout << minDays1(arr, m, k) << nline;
    }
    return 0;
}