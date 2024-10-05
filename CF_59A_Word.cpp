#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int upper = 0, lower = 0;
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            lower++;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            upper++;

        i++;
    }
    if (lower > upper || lower == upper)
    {
        int j = 0;
        while (s[j] != '\0')
        {
            if (s[j] >= 'A' && s[j] <= 'Z')
            {
                s[j] += 32;
            }
            j++;
        }
    }
    else if (upper > lower)
    {
        int k = 0;
        while (s[k] != '\0')
        {
            if (s[k] >= 'a' && s[k] <= 'z')
            {
                s[k] -= 32;
            }
            k++;
        }
    }
    cout << s;

    return 0;
}