#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int sumOfDigits = 0;
        int num = i;
        while (num)
        {
            sumOfDigits += num % 10;
            num /= 10;
        }
        if (sumOfDigits >= a && sumOfDigits <= b)
        {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}