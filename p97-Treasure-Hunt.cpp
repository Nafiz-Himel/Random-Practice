#include <bits/stdc++.h>
using namespace std;

long long dp[125][8000];
int val[125];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, ww;
    cin >> n >> k >> ww;

    for (int i = 0; i < n; i++)
        cin >> val[i];

    memset(dp, 0, sizeof(dp));

    for (int i = 0; i < n; i++)
    {
        int cost = i + 1;
        int v = val[i];

        for (int j = k; j >= 1; j--)
            for (int w = ww; w >= cost; w--)
                if (dp[j - 1][w - cost] + v > dp[j][w])
                    dp[j][w] = dp[j - 1][w - cost] + v;
    }

    long long ans = 0;
    for (int j = 0; j <= k; j++)
        for (int w = 0; w <= ww; w++)
            ans = max(ans, dp[j][w]);

    cout << ans << endl;
    return 0;
}