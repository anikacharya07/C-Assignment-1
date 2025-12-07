#include <stdio.h>

int main(void) {
    int i,n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Please enter a positive number\n");
        return 0;
    }
    
    int sum = 1;
    printf("Factors of %d: 1", n);
    
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            printf(" + %d", i);
            
            if (i != n / i) {
                sum += n / i;
                printf(" + %d", n / i);
            }
        }
    }
    
    printf(" = %d\n", sum);
    
    if (sum == n && n != 1) {
        printf("%d is a Perfect Number\n", n);
    } else {
        printf("%d is not a Perfect Number\n", n);
    }
    
    return 0;
}
