#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int N,Q;
    cin >> N>> Q;
    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    while(Q--){
    int val;
    cin >> val;
    int flag = 0;
    int l = 0;
    int r = N - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == val)
        {
            flag = 1;
            break;
        }
        else if (a[mid] > val)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    if (flag == 1)
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
}
    return 0;
}
