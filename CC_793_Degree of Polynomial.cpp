#include <iostream>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int zeroCount = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (ar[i] == 0)
            {
                zeroCount++;
            }
            else
            {
                break;
            }
        }
        cout << n - zeroCount - 1 << endl;
    }
}