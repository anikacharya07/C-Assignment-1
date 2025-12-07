#include <stdio.h>

int main(void) {
    int a, b;
    
    printf("Enter base and exponent (a b): ");
    scanf("%d %d", &a, &b);
    
    if (b < 0) {
        printf("Negative exponents not supported for integers\n");
        return 1;
    }
    
    long long result = 1;
    int base = a;
    int exp = b;
    
    while (exp > 0) {
        if (exp % 2 == 1) {
            result *= base;
        }
        base *= base;
        exp /= 2;
    }
    
    printf("%d^%d = %lld\n", a, b, result);
    
    return 0;
}