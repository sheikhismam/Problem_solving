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

        if (n == 0)
        {
            cout << 0 << endl;
            continue;
        }
        while (n)
        {
            int lastDigit = n % 10;
            cout << lastDigit << " ";
            n /= 10;
        }

        cout << endl;
    }

    return 0;
}