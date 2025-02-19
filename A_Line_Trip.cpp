#include <bits/stdc++.h>

using namespace std;

void solve();

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v;
    v.push_back(0);
    while (n--)
    {
        int gasStation;
        cin >> gasStation;
        v.push_back(gasStation);
    }
    int maxDistance = INT_MIN, distance;
    
    v.push_back(x);
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (i + 1 == v.size() - 1)
            distance = (v[i + 1] - v[i]) * 2;
        else
            distance = v[i + 1] - v[i];
        maxDistance = max(maxDistance, distance);
    }
    cout << maxDistance << endl;
}

// 19-02-2025
// Problem link: https://codeforces.com/contest/1901/problem/A