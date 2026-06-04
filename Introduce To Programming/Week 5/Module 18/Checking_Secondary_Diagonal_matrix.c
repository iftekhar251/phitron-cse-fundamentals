#include <stdio.h>
#include <stdbool.h>
int main()
{

    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    bool is_flag = true;
    if (r == c) // chk square matrix
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i + j == r - 1)
                {
                    // we are on secondary diagonal
                }
                else
                {
                    if (a[i][j] != 0)
                    {
                        is_flag = false;
                    }
                }
            }
        }
        if (is_flag)
        {
            printf("This is a secondary Diagonal matrix\n");
        }
        else
        {
            printf("This is not a secondary Diagonal matrix\n");
        }
    }
    else
    {
        printf("This is not a secondary Diagonal matrix\n");
    }
    return 0;
}