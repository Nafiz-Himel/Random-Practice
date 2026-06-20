// Segregate Even and Odd Nodes

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> v2;
    int n, val;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        if (val % 2 == 0)
            v.push_back(val);
        else
            v2.push_back(val);
    }

    vector<int> v3;
    v3.insert(v3.end(), v.begin(), v.end());
    v3.insert(v3.end(), v2.begin(), v2.end());
    for (int x : v3)
    {
        cout << x << " ";
    }
    return 0;
}
