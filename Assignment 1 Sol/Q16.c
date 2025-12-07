#include <stdio.h>

const int FACTORIALS[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

int main(void) {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int original = n;
    int sum = 0;
    int temp = n;
    
    while (temp > 0) {
        int digit = temp % 10;
        sum += FACTORIALS[digit];
        temp /= 10;
    }
    
    if (sum == original) {
        printf("%d is a Peterson number\n", original);
    } else {
        printf("%d is not a Peterson number\n", original);
    }
    
    return 0;
}