#include<stdio.h>
int count_before_one(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1)
            {
                break; 
            }
        count++;
    }
    return count;
}
    int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
       
    int ans = count_before_one(a, n);
    printf("%d\n", ans);

    return 0;
}
