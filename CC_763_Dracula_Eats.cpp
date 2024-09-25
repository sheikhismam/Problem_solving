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
        int a = ((n - 2) / 7) + 1;
        if (n < 2)
            cout << 0 << endl;
        else
            cout << a << endl;
    }
    return 0;
}