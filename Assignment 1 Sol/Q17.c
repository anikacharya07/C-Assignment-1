#include <stdio.h>

int main(void) {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("%d is not a perfect square\n", n);
        return 0;
    }
    
    if (n == 0 || n == 1) {
        printf("%d is a perfect square (%d = %d²)\n", n, n, n);
        return 0;
    }
    
    int left = 1, right = n;
    int isPerfect = 0;
    int root = 0;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        long long square = (long long)mid * mid;
        
        if (square == n) {
            isPerfect = 1;
            root = mid;
            break;
        } else if (square < n) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    if (isPerfect) {
        printf("%d is a perfect square (%d = %d²)\n", n, n, root);
    } else {
        printf("%d is not a perfect square\n", n);
    }
    
    return 0;
}