#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool vis[1005];

int max1 = INT_MIN;
int max2 = INT_MIN;

void bfs(int scr)
{
    queue<int> q;
    q.push(scr);

    vis[scr] = true;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        if (par > max1)
        {
            max2 = max1;
            max1 = par;
        }
        else if (par < max1 && par > max2)
        {
            max2 = par;
        }

        for (int child : adj_list[par])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    bfs(0);
    cout << max1 << endl
         << max2;
    return 0;
}