#include <stdio.h>

int main(void) {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int original = n;
    int reversed = 0;
    int temp = (n < 0) ? -n : n;
    
    while (temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    
    if ((original < 0 ? -original : original) == reversed) {
        printf("%d is a Palindrome\n", original);
    } else {
        printf("%d is Not a Palindrome\n", original);
    }
    
    return 0;
}