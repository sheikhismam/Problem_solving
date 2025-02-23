#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool easy = true;
        if (s.size() >= 4)
        {
            for (int i = 0; i < s.size() - 3; i++)
            {
                if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
                {
                    if (s[i + 1] != 'a' && s[i + 1] != 'e' && s[i + 1] != 'i' && s[i + 1] != 'o' && s[i + 1] != 'u')
                    {
                        if (s[i + 2] != 'a' && s[i + 2] != 'e' && s[i + 2] != 'i' && s[i + 2] != 'o' && s[i + 2] != 'u')
                        {
                            if (s[i + 3] != 'a' && s[i + 3] != 'e' && s[i + 3] != 'i' && s[i + 3] != 'o' && s[i + 3] != 'u')
                            {
                                easy = false;
                            }
                        }
                    }
                }
            }
        }
        

        if (easy)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

// 23-02-2025
// Problem link: https://www.codechef.com/problems/EZSPEAK