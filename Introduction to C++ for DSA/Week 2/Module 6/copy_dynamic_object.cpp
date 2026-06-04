#include<bits/stdc++.h>
using namespace std;
class footballer{
    public:
    string country;
    int jersy;
    footballer(string country,int jersy){
        this->country =country;
        this->jersy =jersy;
    }
};
int main(){
    footballer *messi=new footballer("Argentina",10);
    footballer *ronaldo=new footballer("portugal",7);
    *messi=*ronaldo;
    cout<<messi->country<<" "<<messi->jersy<<endl;
    return 0;
}