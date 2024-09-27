#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool ansFound = false;
    int ans = 0;
    while (a > 0)
    {
        if (a * 2 <= b && a * 4 <= c)
        {
            ans = a + (a * 2) + (a * 4);
            ansFound = true;
            break;
        }

        a = a - 1;
    }
    if (ansFound)
        cout << ans << endl;
    else
        cout << -1 << endl;
    return 0;
}