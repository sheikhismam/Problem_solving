#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector<int> permutation(n+1);
        for(int i=1; i<=n; i++)
            cin >> permutation[i];

        if(is_sorted(permutation.begin(),permutation.end()))
            cout << "YES" << endl;
        else 
        {
            for(int j=0; j<n+1; j++)
                for(int i=2; i<n; i++)
                    if(permutation[i] > permutation[i-1] && permutation[i] > permutation[i+1])
                        swap(permutation[i], permutation[i+1]);
            if(is_sorted(permutation.begin(),permutation.end()))
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
        }

    }
    return 0;
}

// 21-02-2025
// Problem link: https://codeforces.com/problemset/problem/1896/A