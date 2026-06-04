#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=0;
    int N;
    cin>>N;
 for(int i=0;i<N;i++) // একটি লুপ চলছে ০ থেকে N পর্যন্ত -> কমপ্লেক্সিটি O(N)

 {

 for(int j=0;j<N;j++) // একটি লুপ চলছে N থেকে i পর্যন্ত -> কমপ্লেক্সিটি O(N) [ worst কেসে i যখন ০ হয়ে যাবে তখন লুপটি পুরো N থেকে ০ পর্যন্ত চলবে। ]

 {

 cout<<"Hello"<<endl;

 }

 }

 // টোটাল কমপ্লেক্সিটি O(N) * O(N) = O(N*N) [ কারন একটি লুপ আরেকটি লুপের ভিতরে আছে নেস্টেড আকারে ]
    return 0;
}