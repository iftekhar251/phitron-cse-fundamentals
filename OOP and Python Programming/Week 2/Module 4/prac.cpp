#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[10]={2,3,4,5,6};
    cout<<"before n->"<<n<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"----------------"<<endl;
    for(int i=n;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=1;
    n++;
    cout<<"after n->"<<n<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"----------------"<<endl;
    int k=3;
    for(int i=n;i>k;i--){
        arr[i]=arr[i-1];

    }
    arr[k]=07;
    n++;

    cout<<"after2 n->"<<n<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }


    return 0;
}
