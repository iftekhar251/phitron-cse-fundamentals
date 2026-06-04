#include<stdio.h>
int mello(){
    printf("mello\n");
    
}
int gello(){
    printf("gello\n");
    mello();
}
int hello(){
    printf("hello\n");
    gello();
}
int main(){

    printf("hi\n");
    hello();
    return 0;
}