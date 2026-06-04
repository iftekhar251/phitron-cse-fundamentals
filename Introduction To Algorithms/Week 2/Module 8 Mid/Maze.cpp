#include <bits/stdc++.h>
using namespace std;

int n, m;
char grid[105][105];
bool vis[105][105];
int parent_i[105][105];
int parent_j[105][105];
vector<pair<int,int>> d = {{0,1}, {0,-1}, {-1,0}, {1,0}};

bool valid(int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int si, int sj) {
    queue<pair<int,int>> q;
    q.push({si, sj});
    vis[si][sj] = true;

    while (!q.empty()) {
        pair<int,int> par = q.front();
        q.pop();

        int par_i = par.first;
        int par_j = par.second;

        for (int i = 0; i < 4; i++) {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;

            if (valid(ci, cj) && !vis[ci][cj] &&
               (grid[ci][cj] == '.' || grid[ci][cj] == 'D')) {
                q.push({ci, cj});
                vis[ci][cj] = true;
                parent_i[ci][cj] = par_i;
                parent_j[ci][cj] = par_j;
            }
        }
    }
}

int main() {
    cin >> n >> m;

    int si, sj, di, dj;
    di = -1; dj = -1;

    for (int i = 0; i < n; i++) {
        cin >> grid[i];
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 'R') { si = i; sj = j; }
            if (grid[i][j] == 'D') { di = i; dj = j; }
        }
    }

    memset(vis, false, sizeof(vis));
    memset(parent_i, -1, sizeof(parent_i));
    memset(parent_j, -1, sizeof(parent_j));

    bfs(si, sj);


    if (vis[di][dj]) {
        int ci = di, cj = dj;

        while (!(ci == si && cj == sj)) {
            int pi = parent_i[ci][cj];
            int pj = parent_j[ci][cj];

            if (grid[ci][cj] == '.')
                grid[ci][cj] = 'X';

            ci = pi;
            cj = pj;
        }
    }

    for (int i = 0; i < n; i++)
        cout << grid[i] << "\n";

    return 0;
}