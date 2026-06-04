// #include<stdio.h>


// int sum(num1,num2){
//     int ans=num1+num2;
//     return ans;
// }
// int sub(num1,num2){
//     int ans=num1-num2;
//     return ans;
// }
// int main(){
//     int val1=sum(10,20);
//     int val2=sub(30,15);

    
//     printf("%d %d",val1,val2);
    
//     return 0;
// }

#include<stdio.h>

int sum(num1,num2){
    int ans=num1+num2;
    return ans;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int val1=sum(a,b);
    printf("%d",val1);
    
    return 0;
}