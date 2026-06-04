#include<stdio.h>
int main(){
    
    int n,sum=0;
    scanf("%d",&n);
    sum=0;
    for(int i=1;i<=n;i=i+1){
       sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}