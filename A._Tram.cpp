#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int passengers = 0, capacity = 0;
    while(n--){
        int a, b;
        cin >> a >> b;
        passengers -= a;
        passengers += b;
        capacity = max(capacity,passengers);
    }
    cout << capacity;
    return 0;
}

// 23-02-2025
// Problem link: https://codeforces.com/contest/116/problem/A