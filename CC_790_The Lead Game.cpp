#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int lead = 0, winner;
    int sum1 = 0;
    int sum2 = 0;
    while (n)
    {
        int player1, player2;
        cin >> player1 >> player2;
        sum1 += player1;
        sum2 += player2;
        int diff = sum1 - sum2;
        if (abs(diff) > lead)
        {
            lead = abs(diff);
            if (diff < 0)
                winner = 2;
            else if (diff > 0)
                winner = 1;
        }
        n--;
    }
    cout << winner << " " << lead;
}