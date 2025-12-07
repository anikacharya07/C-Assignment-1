#include <stdio.h>

int main(void) {
    int start, end,num,i;
    
    printf("Enter range (start end): ");
    scanf("%d %d", &start, &end);
    
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }
    
    if (start < 2) start = 2;
    
    printf("Prime numbers between %d and %d:\n", start, end);
    int count = 0;
    
    for (num = start; num <= end; num++) {
        int isPrime = 0;
        
        if (num == 2 || num == 3) {
            isPrime = 1;
        }
        else if (num > 1 && num % 2 != 0 && num % 3 != 0) {
            isPrime = 1;
            for (i = 5; i * i <= num; i += 6) {
                if (num % i == 0 || num % (i + 2) == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }
        
        if (isPrime) {
            printf("%d ", num);
            count++;
        }
    }
    
    printf("\nTotal primes: %d\n", count);
    return 0;
}
