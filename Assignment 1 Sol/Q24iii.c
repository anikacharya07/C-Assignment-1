#include <stdio.h>

int main(void) {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    int sum = (1 << (n + 1)) - 2;
    
    printf("Sum = %d\n", sum);
    return 0;
}