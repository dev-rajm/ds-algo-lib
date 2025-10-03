#include <bits/stdc++.h>
using namespace std;

/*
You are given an array of integers stones where stones[i] is the weight of the ith stone.

We are playing a game with the stones. On each turn, we choose the heaviest two stones and smash them together. Suppose the heaviest two stones have weights x and y with x <= y. The result of this smash is:

If x == y, both stones are destroyed, and
If x != y, the stone of weight x is destroyed, and the stone of weight y has new weight y - x.
At the end of the game, there is at most one stone left.

Return the weight of the last remaining stone. If there are no stones left, return 0.
*/

int lastStoneWeight(vector<int> &stones)
{
    priority_queue<int> pq(stones.begin(), stones.end());

    while (pq.size() != 1)
    {
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();

        pq.push(x - y);
    }
    return pq.top();
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> stones(n);
        for (int i = 0; i < n; i++)
            cin >> stones[i];

        cout << lastStoneWeight(stones) << "\n";
    }
    return 0;
}