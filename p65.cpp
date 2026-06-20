// Mirror's Pattern

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << i;
    }
    cout << endl;

    for (int i = 2; i < n; i++)
    {
        cout << i;
        for (int j = 1; j <= n - 2; j++)
        {
            cout << " ";
        }
        cout << n - i + 1 << endl;
    }

    if (n > 1)
    {
        for (int i = n; i >= 1; i--)
        {
            cout << i;
        }
    }

    return 0;
}
