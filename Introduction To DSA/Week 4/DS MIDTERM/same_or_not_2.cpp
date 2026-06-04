#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    if (n != m)
    {
        cout << "NO";
        return 0;
    }

    int stack[1000000], queue[1000000];
    for (int i = 0; i < n; i++)
    {
        cin >> stack[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> queue[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (stack[n - 1 - i] != queue[i])
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}