// The Brothers of Alexandria

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }

    sort(v.begin(), v.end());

    cout << v[k - 1];
    return 0;
}