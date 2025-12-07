#include <stdio.h>

int main(void) {
    int n,i;
    
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    if (n < 1) {
        printf("Invalid input\n");
        return 1;
    }
    
    long long a = 0, b = 1;
    
    printf("Fibonacci series: ");
    for ( i = 0; i < n; i++) {
        printf("%lld", a);
        if (i < n - 1) printf(", ");
        
        b = a + b;
        a = b - a;
    }
    printf("\n");
    
    return 0;
}
