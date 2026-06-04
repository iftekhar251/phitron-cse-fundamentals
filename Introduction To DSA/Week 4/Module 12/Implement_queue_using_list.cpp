#include<bits/stdc++.h>
using namespace std;

class myqueue{
    public:
   list<int> l;
    int sz=0;
        void push(int val){
          l.push_back(val);
        }
        void pop(){
            sz--;
            l.pop_front();
            
        }
        int front(){
           return l.front();
        }
        int back(){
            return l.back();
        }
        int size(){
            return l.size();
        }

        bool empty(){
            return l.empty();
        }
};
int main()
{
    myqueue st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        st.push(val);
    }
    while(!st.empty()){
        cout<<st.front()<<endl;
        st.pop();
    }
      
    return 0;
}