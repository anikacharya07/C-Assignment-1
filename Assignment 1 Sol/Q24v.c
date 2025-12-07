#include <stdio.h>

int main(void) {
    int n, x;
    printf("Enter x and n: ");
    scanf("%d %d", &x, &n);
    
    double sum = 0.0;
    double term = x;
    int sign = 1;
    int i;
    for (i = 1; i <= n; i++) {
        sum += sign * term;
        
        term = term * x / (i + 1);
        sign = -sign;
    }
    
    printf("Sum = %.6f\n", sum);
    return 0;
}
