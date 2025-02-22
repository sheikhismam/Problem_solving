#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        map<int, int> freq;
        set<int> s;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
            freq[x]++;
        }

        if (s.size() == 1)
            cout << "Yes\n";
        else if (s.size() == 2)
        {
            auto it = s.begin();
            int a = *it;
            int b = *(++it);
            if (freq[a] + freq[b] == n && abs(freq[a] - freq[b]) <= 1)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
        else
            cout << "No\n";
    }
    return 0;
}

// 22-02-2025
// Problem Link: https://codeforces.com/problemset/problem/1890/A
