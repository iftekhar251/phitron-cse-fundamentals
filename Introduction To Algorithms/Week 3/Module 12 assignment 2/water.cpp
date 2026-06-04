#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int h[n];
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }

        // Find max_index and second_max_index
        int max_idx = 0, sec_max_idx = n;
        for (int i = 1; i < n; i++)
        {
            if (h[i] > h[max_idx])
            {
                sec_max_idx = max_idx;
                max_idx = i;
            }
            else if (sec_max_idx == n || h[i] > h[sec_max_idx])
            {
                sec_max_idx = i;
            }
        }

        if (max_idx >= sec_max_idx)
        {
            cout << sec_max_idx << " " << max_idx << endl;
        }
        else
        {
            cout << max_idx << " " << sec_max_idx << endl;
        }
    }
    return 0;
}