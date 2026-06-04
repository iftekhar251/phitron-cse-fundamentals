#include<stdio.h>
int main(){

    char s[100001];
    scanf("%s",&s);
    
    int cons_count=0;;
    for (int i = 0; s[i] !='\0'; i++)
    {
        char c=s[i];
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            cons_count++;
        }
    }
     
        printf("%d \n",cons_count);
    return 0;
}