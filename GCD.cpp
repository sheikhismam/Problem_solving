#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    while (b)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    cout << a << endl;
    return 0;
}