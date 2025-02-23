#include <bits/stdc++.h>

using namespace std;

int main() {
    string p;
    cin >> p;
    bool willExecute = false;
    for(char instruction: p)
    {
        if(instruction == 'H' || instruction == 'Q' || instruction == '9')
        {
            willExecute = true;
            break;
        }
    }        

    if(willExecute)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    return 0;
}

// 23-02-2025
// Problem link: https://codeforces.com/contest/133/problem/A