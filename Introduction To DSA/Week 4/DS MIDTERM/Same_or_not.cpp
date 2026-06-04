#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, q;
    cin >> s >> q;

    if (s != q)
    {
        cout << "NO";
        return 0;
    }

    stack<int> st;
    queue<int> qu;

    for (int i = 0; i < s; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        qu.push(x);
    }

    while (!st.empty())
    {
        if (st.top() != qu.front())
        {
            cout << "NO";
            return 0;
        }
        st.pop();
        qu.pop();
    }

    cout << "YES";
    return 0;
}