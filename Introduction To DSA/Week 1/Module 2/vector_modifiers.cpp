#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4};
    //vector<int> v2={5,6,7};
    //v2 = v;
    // for (int i = 0; i < v2.size(); i++)
    //     cout << v[i] << endl;
    //v.insert(v.begin()+2,v2.begin(),v2.end());
    //v.erase(v.begin()+1,v.begin()+3);
    replace(v.begin(),v.end(),2,100);
    for(int x:v)
    {
        cout<<x<<" ";
    }

    return 0;
}