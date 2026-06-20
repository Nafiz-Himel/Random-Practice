#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin >> n >> e;

    vector<int> adj_list[n];


    while(e--)
    {
        int a,b;
        cin >> a >> b;

        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    int c;
    cin >> c;

    for(int x : adj_list[c])
        cout << x << " ";
    cout << endl;
    return 0;
}