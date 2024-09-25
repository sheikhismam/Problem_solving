#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int num = n;

    int reverse = 0;
    while (n)
    {
        reverse = reverse * 10 + (n % 10);
        n /= 10;
    }
    cout << reverse << endl;
    if (reverse == num)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}