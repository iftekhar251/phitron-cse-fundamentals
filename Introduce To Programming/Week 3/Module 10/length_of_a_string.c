#include <stdio.h>
#include <string.h>
int main()
{
    
    char s[101];
    scanf("%s", &s);

    //Method:2
    
    int sz=strlen(s);
    printf("%d",sz);

    //Method:2
    // int count = 0;
    // for (int i = 0; s[i] != '\0'; i++)
    // {
    //     count++;
    // }
    // printf("%d", count);
    return 0;
}