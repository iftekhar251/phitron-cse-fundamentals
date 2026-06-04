#include<stdio.h>
#include<string.h>
int is_palindrome(char a[]){
    int length=strlen(a);
    char temp[1001];
    int n=0;
    for(int i=0;i<length;i++){
        temp[i]=a[i];
    }
    for(int i=length-1;i>=length/2;i--){
        if(temp[i]!=temp[n]){
            return 0;
           
        }
         n++;
            
    }
    return 1;
}

int main(){

    char s[1001];
    scanf("%s",&s);
    int ans=is_palindrome(s);
    if(ans==0){
         printf("Not Palindrome");
    }
    else{
        printf("Palindrome");
    }
   
   
    return 0;
}