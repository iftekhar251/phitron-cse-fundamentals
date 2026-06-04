#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

   
    int line = (N + 1) / 2 + 5;
    int star = 1;
    int space = line - 1;

    for(int i = 1; i <= line; i++) {

        for(int j = 1; j <= space; j++) {
            printf(" ");
        }

        for(int j = 1; j <= star; j++) {
            printf("*");
        }

        printf("\n");

        star = star + 2;
        space = space - 1;
    }

   
    space = ((line * 2) - 1 - N) / 2;

    for(int i = 1; i <= 5; i++) {

        for(int j = 1; j <= space; j++) {
            printf(" ");
        }

        for(int j = 1; j <= N; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
