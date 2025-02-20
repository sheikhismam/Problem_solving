#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        string waterRow;
        cin >> waterRow;
        int cnt = 0;
        bool ansFound = false;
        for(int i=0; i<waterRow.size(); i++)
        {
            if(waterRow[i] == '.' && waterRow[i+1] == '.' && waterRow[i+2] == '.')
            {
                cout << 2 << endl;
                ansFound = true;
                break;
            }
            if(waterRow[i] == '.')
                cnt++;
        }
        if(!ansFound)
            cout << cnt << endl;
    }
    return 0;
}

// 19-02-2025
// Problem link: https://codeforces.com/problemset/problem/1900/A