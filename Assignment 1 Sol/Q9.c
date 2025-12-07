#include <stdio.h>

int main(void) {
    int i, n;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        factorial *= i;
    }

    printf("\n%d! = %lld (", n, factorial);

    for ( i = n; i >= 1; i--) {
        printf("%d", i);
        if (i > 1) printf(" x ");
    }

    printf(")\n");

    return 0;
}
