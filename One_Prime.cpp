#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    bool isPrime = true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            isPrime = false;
    }
    if (isPrime)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}