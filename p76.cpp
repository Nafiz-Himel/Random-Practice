#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool vis[1005];

int min1 = INT_MAX;
int min2 = INT_MAX;

void bfs(int scr)
{
    queue<int> q;
    q.push(scr);

    vis[scr] = true;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        if (par < min1)
        {
            min2 = min1;
            min1 = par;
        }
        else if (par > min1 && par < min2)
        {
            min2 = par;
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
    cout << min1 << endl
         << min2;
    return 0;
}