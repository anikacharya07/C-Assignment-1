#include <stdio.h>

int main(void) {
    long int n, a = 0, b = 1, c;

    printf("Enter a number: ");
    scanf("%ld", &n);

    if (n == 0 || n == 1) {
        printf("%ld is a Fibonacci number.\n", n);
        return 0;
    }

    while (1) {
        c = a + b;
        if (c == n) {
            printf("%ld is a Fibonacci number.\n", n);
            break;
        } else if (c > n) {
            printf("%ld is not a Fibonacci number.\n", n);
            break;
        }
        a = b;
        b = c;
    }

    return 0;
}