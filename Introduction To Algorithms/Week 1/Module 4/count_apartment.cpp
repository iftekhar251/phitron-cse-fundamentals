#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005]; 
bool vis[1005][1005];

vector<pair<int,int>> d = {{-1,0}, {1,0}, {0,-1}, {0,1}};

int n, m;

bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void bfs(int si, int sj)
{
    queue<pair<int,int>> q;
    q.push({si, sj});
    vis[si][sj] = true;

    while(!q.empty())
    {
        int pi = q.front().first;
        int pj = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++)
        {
            int ci = pi + d[i].first;
            int cj = pj + d[i].second;

            if(valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != '#')
            {
                vis[ci][cj] = true;
                q.push({ci, cj});
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        cin >> grid[i];
    }

    memset(vis, false, sizeof(vis));

    int cnt = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(grid[i][j] != '#' && !vis[i][j])
            {
                bfs(i, j);
                cnt++;
            }
        }
    }

    cout << cnt << "\n";
    return 0;
}