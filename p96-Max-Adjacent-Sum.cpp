#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int mx_even = 0;

    for (int i = 1; i < n; i += 2)
        mx_even = max(mx_even, a[i]);

    int best = 0;

    for (int i = 1; i < n; i += 2)
    {
        if (i - 1 >= 0)
            best = max(best, a[i - 1]);
        if (i + 1 < n)
            best = max(best, a[i + 1]);
    }

    cout << mx_even + best;

    return 0;
}