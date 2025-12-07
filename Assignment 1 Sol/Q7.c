#include <stdio.h>

int main(void) {
    int m, n;
    
    printf("Enter two numbers (m and n): ");
    scanf("%d %d", &m, &n);
    
    if (m > n) {
        int temp = m;
        m = n;
        n = temp;
    }
    
    double average = (m + n) / 2.0;
    
    printf("Average of numbers between %d and %d: %.2lf\n", m, n, average);
    
    return 0;
}