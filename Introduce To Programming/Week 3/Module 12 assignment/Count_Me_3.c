#include <stdio.h>
int main()
{

    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        char s[10001];
        scanf("%s", &s);
        int capital = 0, small = 0, digit = 0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                capital++;
            }
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                small++;
            }
            if (s[i] >= '0' && s[i] <= '9')
            {
                digit++;
            }
        }
        printf("%d %d %d\n", capital, small, digit);
    }

    return 0;
}