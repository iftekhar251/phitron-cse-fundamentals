#include<stdio.h>
int main(){

    int a;
    scanf("%d",&a);
    int tens=a/10;
    int ones=a%10;
    if((ones !=0 && tens%ones==0) || (tens!=0 &&  ones%tens==0)){
        printf("YES");
    }
   else{
     printf("NO");
   }
    
    return 0;
}