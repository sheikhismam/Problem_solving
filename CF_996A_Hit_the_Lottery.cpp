#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int bills, billCount = 0;
    if (n >= 100)
    {
        bills = n / 100;
        n -= bills * 100;
        billCount += bills;
    }

    if (n >= 20)
    {
        bills = n / 20;
        n -= bills * 20;
        billCount += bills;
    }

    if (n >= 10)
    {
        bills = n / 10;
        n -= bills * 10;
        billCount += bills;
    }
    if (n >= 5)
    {
        bills = n / 5;
        n -= bills * 5;
        billCount += bills;
    }
    if (n >= 1)
    {
        billCount += n;
    }

    cout << billCount << endl;
    return 0;
}