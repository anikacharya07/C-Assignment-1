#include <stdio.h>

int main(void) {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    int sum = n * (n + 1) * (2 * n + 1) / 6;
    
    printf("Sum = %d\n", sum);
    return 0;
}