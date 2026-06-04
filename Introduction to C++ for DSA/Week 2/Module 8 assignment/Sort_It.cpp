#include<bits/stdc++.h>
using namespace std;
class student{
    public:
      string name;
      int cls;
      char section;
      int id;
      int math;
      int eng;
      int total;

};
bool cmp(student l,student r){
    if(l.total>r.total){
        return true;
    }
    else if(l.total==r.total){
        
            return l.id<r.id;
        
    }
    else {
        return false;
    }

};
int main(){
    int n;
    cin>>n;
    student a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].name>>a[i].cls>>a[i].section>>a[i].id>>a[i].math>>a[i].eng;
        a[i].total=a[i].math+a[i].eng;

    }
    sort(a,a+n,cmp);
     for(int i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].section<<" "<<a[i].id<<" "<<a[i].math<<" "<<a[i].eng<<endl;


    }
    return 0;
}