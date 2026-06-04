#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    int cls;
    int roll;
    double gpa;
    student(int c,int r,double g){
        cls=c;
        roll=r;
        gpa=g;
    }
};
int main(){
    student rahim(5,45,3.75);
    cout<<rahim.cls<<" "<<rahim.roll<<" "<<rahim.gpa<<endl;


    
   
    return 0;
}