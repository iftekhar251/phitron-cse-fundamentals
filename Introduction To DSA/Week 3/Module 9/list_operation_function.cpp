#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l={10,20,30,85,10,20,45,75};
    l.sort();
    //l.sort(greater<int>());
    l.unique();
    for(int val :l){
        cout<<val<<endl;
    }

      
    return 0;
}