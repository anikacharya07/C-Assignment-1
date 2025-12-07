#include <stdio.h>

int main(void) {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int count = (n == 0) ? 1 : 0;
    int temp = (n < 0) ? -n : n;
    
    while (temp > 0) {
        count++;
        temp /= 10;
    }
    
    printf("Number of digits in %d = %d\n", n, count);
    
    return 0;
}