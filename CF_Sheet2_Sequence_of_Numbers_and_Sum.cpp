#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;

    do
    {
        int minimum = min(a, b);
        int maximum = max(a, b);
        int sum = 0;

        for (int i = minimum; i <= maximum; i++)
        {
            cout << i << " ";
            sum += i;
        }

        cout << "sum =" << sum << endl;

        cin >> a >> b;

    } while (a > 0 && b > 0);

    return 0;
}
