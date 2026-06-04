#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10,20,30,40,50,60,70};
    //list<int> l2;
    // l2=l;
    //l2.assign(l.begin(), l2.end());

    //l.push_back(40);
    //l.push_front(100);

    //cout<<*next(l.begin(),2);
    //l.insert(next(l.begin(),2),200);
    //l.erase(next(l.begin(),2), next(l.begin(),5));

    //replace(l.begin(),l.end(),20,100);

    auto it= find(l.begin(),l.end(),20);
    if(it==l.end()){
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"Found"<<endl;
    }

    for (int val : l)
    {
        cout << val << endl;
    }
    return 0;
}