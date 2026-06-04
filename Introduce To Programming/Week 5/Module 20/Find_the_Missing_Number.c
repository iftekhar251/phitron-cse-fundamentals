#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {

        long long mul, a, b, c;
        scanf("%lld %lld %lld %lld", &mul, &a, &b, &c);

        long long mul1 = a * b * c; 

        if (mul1 != 0 && mul % mul1 == 0) {
            printf("%lld\n", mul / mul1);
        }
        else if (mul1 == 0 && mul == 0) {
            printf("0\n");
        }
        else {
            printf("-1\n");
        }
    }

    return 0;
}
