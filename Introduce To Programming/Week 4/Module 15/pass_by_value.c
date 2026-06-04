#include<stdio.h>
void fun(int x){
    x=20;
    printf("adress of fun value:%p\n",&x);

}
int main(){

    int x=10;
    fun(x);
    // printf("%d",x);
    printf("adress of main value:%p",&x);


    return 0;
}