#include<stdio.h>
int main(){

    char s[25];
    // gets(s);
    fgets(s,15,stdin);
    printf("%s\n",s);
    return 0;
}