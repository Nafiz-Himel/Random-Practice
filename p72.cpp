#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;

    int adj_mat[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                adj_mat[i][j] = 1;
            else
                adj_mat[i][j] = 0;
        }
    }

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;

        adj_mat[a][b] = 1;
        adj_mat[b][a] = 1;
    }

    int c, d;
    cin >> c >> d;

    if (adj_mat[c][d] == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}