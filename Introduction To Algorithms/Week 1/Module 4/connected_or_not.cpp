#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    bool adj[1005][1005];
    memset(adj, false, sizeof(adj));

    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a][b] = true;
    }

    int q;
    cin >> q;

    while(q--)
    {
        int a, b;
        cin >> a >> b;

        if(a == b || adj[a][b] == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}