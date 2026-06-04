#include <stdio.h>
int main()
{

    int n, p_sum = 0, n_sum = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        
        scanf("%d", &a[i]);
        if (a[i] > 0)
        {
            p_sum = p_sum + a[i];
        }
        else if (a[i] < 0)
        {
            n_sum = n_sum + a[i];
        }
    }
    printf("%d %d", p_sum, n_sum);
    return 0;
}