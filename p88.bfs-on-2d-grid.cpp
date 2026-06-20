#include <bits/stdc++.h>
using namespace std;

int n, m;
int grid[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> mov = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

bool valid(int i, int j) 
{
    if(i >= 0 && i < n && j >= 0 && j < m)
        return true;
    return false;
}

bool bfs(int si, int sj) 
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;

    bool touches_border = false;

    while (!q.empty()) 
    {
        pair<int, int> par = q.front();
        q.pop();

        int si = par.first;
        int sj = par.second;

        if (si == 0 || si == n - 1 || sj == 0 || sj == m - 1)
            touches_border = true;

        for (int i = 0; i < 4; i++) 
        {
            int ci = si + mov[i].first;
            int cj = sj + mov[i].second;

            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 1) 
            {
                vis[ci][cj] = true;
                q.push({ci, cj});
            }
        }
    }
    return touches_border;
}

int main() 
{
    cin >> n >> m;

    for (int i = 0; i < n; i++) 
    {
        string row;
        cin >> row;
        for (int j = 0; j < m; j++)
            grid[i][j] = row[j] - '0';
    }

    memset(vis, false, sizeof(vis));
    int border_count = 0, center_count = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 1 && !vis[i][j]) 
            {
                if (bfs(i, j)) 
                    border_count++;
                else 
                    center_count++;
            }
        }

    if (border_count > center_count) 
    {
        cout << "Yes" << endl;
        cout << border_count << " " << center_count << endl;
    } 
    else
        cout << "No" << endl;

    return 0;
}