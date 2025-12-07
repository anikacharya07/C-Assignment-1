#include <stdio.h>

int main(void) {
    long long n;
    
    printf("Enter a number: ");
    scanf("%lld", &n);
    
    if (n <= 0) {
        printf("%lld is not a power of 2\n", n);
        return 0;
    }
    
    int count = 0;
    long long temp = n;
    
    while (temp > 0) {
        count += temp & 1;
        temp >>= 1;
    }
    
    if (count == 1) {
        printf("%lld is a power of 2\n", n);
        
        // Find the power
        temp = n;
        int power = 0;
        while (temp > 1) {
            temp >>= 1;
            power++;
        }
        printf("%lld = 2^%d\n", n, power);
    } else {
        printf("%lld is not a power of 2\n", n);
    }
    
    return 0;
}