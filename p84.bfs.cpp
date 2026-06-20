#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool vis[1005];
int parrent[1005];

void bfs(int src, int dst)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (auto child : adj_list[par])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                parrent[child] = par;
            }
        }
    }

    int node = dst;

    while (node != -1)
    {
                cout
            << node << " ";
        node = parrent[node];
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

    int src, dst;
    cin >> src >> dst;

    memset(vis, false, sizeof(vis));
    memset(parrent, -1, sizeof(parrent));
    bfs(src, dst);
    return 0;
}