#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={4,6,8,7,4};
    auto it=find(v.begin(),v.end(),100);
    if(it==v.end())
    {
        cout<<"Not Found";
    }
    else{
        cout<<"Found";
    }
    return 0;
}