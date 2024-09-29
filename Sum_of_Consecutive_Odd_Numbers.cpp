#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b;
        cin >> a >> b;
        int minimum = min(a, b);
        int maximum = max(a, b);
        long long sum = 0;
        for (int i = minimum + 1; i < maximum; i++)
        {
            if (i % 2 != 0)
                sum += i;
        }
        cout << sum << endl;
    }
    return 0;
}