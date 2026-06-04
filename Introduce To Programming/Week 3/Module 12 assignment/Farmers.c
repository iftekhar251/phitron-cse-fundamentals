#include <stdio.h>
int main()
{

    int T;
    scanf("%d", &T);
    while (T--)
    {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);
        int one_worker_need = M1 * D;
        int New_Total_worker_need= one_worker_need / (M1 + M2);
        int lowerdays = D - New_Total_worker_need;
        printf("%d \n", lowerdays);
    }
    return 0;
}