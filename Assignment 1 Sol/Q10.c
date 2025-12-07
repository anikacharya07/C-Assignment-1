#include <stdio.h>

int main(void) {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int sum = 0;
    int original = n;
    
    if (n < 0) n = -n;
    
    while (n > 0) {
        sum += n % 10;  
        n /= 10;      
    }
    
    printf("Sum of digits of %d = %d\n", original, sum);
    
    return 0;
}