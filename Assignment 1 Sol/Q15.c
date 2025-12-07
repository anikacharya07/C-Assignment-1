#include <stdio.h>

int main(void) {
    int n,i;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int original = n;
    int sum = 0;
    int digits = 0;
    int temp = n;
    
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    
    temp = n;
    
    while (temp > 0) {
        int digit = temp % 10;
        int power = 1;
        
        for (i = 0; i < digits; i++) {
            power *= digit;
        }
        
        sum += power;
        temp /= 10;
    }
    
    if (sum == original) {
        printf("%d is an Armstrong number\n", original);
    } else {
        printf("%d is not an Armstrong number\n", original);
    }
    
    return 0;
}
