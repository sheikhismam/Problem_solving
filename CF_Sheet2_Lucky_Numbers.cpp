#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int luckyCount = 0;
    for (int i = a; i <= b; i++)
    {
        bool isLucky = true;
        int num = i;

        while (num > 0)
        {
            int ld = num % 10;
            num /= 10;
            if (ld != 4 && ld != 7)
            {
                isLucky = false;
                break;
            }
        }

        if (isLucky)
        {
            cout << i << " ";
            luckyCount++;
        }
    }
    if (luckyCount == 0)
        cout << -1;
    return 0;
}