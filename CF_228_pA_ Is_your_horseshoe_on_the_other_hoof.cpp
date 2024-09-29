#include <iostream>

using namespace std;

int main()
{
    int n = 4;
    int ar[4];
    for (int i = 0; i < n; i++) // Reading all the input
    {
        cin >> ar[i];
    }

    int sameCount = 1;

    for (int i = 0; i < n; i++)
    {
        bool sameShoe = false;
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i] == ar[j])
            {
                sameShoe = true;
                break;
            }
        }
        if (sameShoe)
            sameCount++;
    }

    cout << sameCount - 1 << endl;

    return 0;
}