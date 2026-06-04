#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1005];

int main()
{
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int q;
    cin >> q;

    while(q--)
    {
        int x;
        cin >> x;

        if(adj[x].size() == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            sort(adj[x].begin(), adj[x].end(), greater<int>());

            for(int v : adj[x])
            {
                cout << v << " ";
            }
            cout << endl;
        }
    }

    return 0;
}