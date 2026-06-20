#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];

    map<char, int> freq;
    for (int i = 0; i < n; i++)
        freq[s[i]]++;

    vector<pair<int, char>> o, e;

    for (auto x : freq)
    {
        if (x.second % 2 == 1)
            o.push_back({x.second, x.first});
        else
            e.push_back({x.second, x.first});
    }

    sort(o.begin(), o.end());
    sort(e.begin(), e.end());

    string res;

    for (auto x : o)
        res += string(x.first, x.second);

    for (auto x : e)
        res += string(x.first, x.second);

    cout << res << endl;

    return 0;
}