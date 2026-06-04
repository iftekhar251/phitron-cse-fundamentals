#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> l(10, 3);  //l={3,3,3,3}
    int a[] = {1, 30, 50};
    list<int> l2(a, a + 3);

    // l2.clear();

    l2.resize(5,100);

    for (int val : l2)
    {
        cout << val << endl;
    }
    /*for(auto it=l.begin();it!=l.end();it++){
          cout<<*it<<endl;
     }*/

    return 0;
}