#include <stdio.h>
int main()
{

    int tk;

    scanf("%d", &tk);
    if (tk >= 5000)
    {
        printf("Cox's bazar jabu\n");
        if (tk >= 10000)
        {
            printf("saint martin jabu\n");
        }
        else
        {
            printf("ferot asbo\n");
        }
    }

    else
    {
        printf("Cox's Bazar jabu na\n");
    }

    return 0;
}