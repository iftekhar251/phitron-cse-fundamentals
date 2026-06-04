#include<stdio.h>
int main()
{

    int tk;
  
    scanf("%d",&tk);
    if(tk>=100){
        printf("Burger khabo\n");
    }
    else if(tk>=50){
        printf("Fuska khabo");

    }
    else if(tk  >=20){
        printf("chips khabo");}

    else{
        printf("kichui khabo Na\n");
    }

    return 0;
}