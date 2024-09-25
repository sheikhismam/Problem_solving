#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int factorial = 1;
        for (int i = 1; i <= a; i++)
        {
            factorial *= i;
        }
        cout << factorial << endl;
    }

    return 0;
}