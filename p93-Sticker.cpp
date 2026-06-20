#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;

    map<long long int, long long int> m;
    
    for (long long int i = 1; i <= n; i++)
    {
        long long int x;
        cin >> x;
        m[x] += i;
    }
    for (auto x : m)
        cout << x.first << " " << x.second << endl;

    return 0;
}