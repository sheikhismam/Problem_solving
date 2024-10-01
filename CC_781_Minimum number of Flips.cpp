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
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += ar[i];
        }
        int a = abs(sum);
        if (a == 0)
            cout << 0 << endl;
        else if (a % 2 == 0)
            cout << a / 2 << endl;
        else
            cout << -1 << endl;
    }
}
