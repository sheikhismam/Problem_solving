#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << 2 << " ";
    for (int i = 3; i <= n; i++)
    {
        bool isPrime = true;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
                isPrime = false;
        }

        if (isPrime)
            cout << i << " ";
    }
    cout << endl;

    return 0;
}