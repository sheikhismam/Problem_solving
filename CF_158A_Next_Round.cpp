#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int winner = 0;

    for (int i = 0; i < n; i++)
    {
        if (ar[i] > 0 && ar[i] >= ar[k - 1])
            winner++;
    }
    cout << winner << endl;
    return 0;
}