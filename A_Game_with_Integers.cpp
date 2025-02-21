#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        if(n %3 ==0)
            cout << "Second" << endl;
        else if((n+1)%3 ==0 || (n-1)%3 == 0)
            cout << "First" << endl;
    }
    return 0;
}

// 21-02-2025
// Problem link: https://codeforces.com/problemset/problem/1899/A