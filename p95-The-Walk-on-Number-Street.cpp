#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, k;
    cin >> n >> k;

    vector<long long int> a(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];

    priority_queue<pair<long long int, int>> pq;

    for (int i = 0; i < n; i++) 
    {
        pq.push({a[i], i});

        if (i >= k - 1) 
        {
            while (pq.top().second <= i - k) 
            {
                pq.pop();
            }
            cout << pq.top().first << (i == n - 1 ? "" : " ");
        }
    }
    cout << endl;
    return 0;
}