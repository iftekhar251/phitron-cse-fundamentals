#include<stdio.h>
int x=15; //global variable
int sum(){
    printf("sum-> %d\n",x);
}
int main(){
    
    printf("main-> %d\n",x);
    sum();
    return 0;
}