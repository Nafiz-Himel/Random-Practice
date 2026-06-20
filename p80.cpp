#include<bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool vis[1005];
int mx = INT_MIN;
int ans = INT_MIN;

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while(!q.empty())
    {
        int par = q.front();
        q.pop();
        vis[par] = true;

        if(mx > ans)
        {
            ans = mx;
        }

        if( par > mx)
        {
            mx = par;
        }
        // if(mx-1 > ans)
        // {
        //     ans = mx;
        // }

        for(int child : adj_list[par])
        {
            if(vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
            }
        }
    }

    cout << ans;
}
int main()
{
    int n,e;
    cin >> n >> e;

    while(e--)
    {
        int a,b;
        cin >> a >> b;

        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    int src;
    cin >> src;

    memset(vis,false,sizeof(vis));

    bfs(src);
    return 0;
}