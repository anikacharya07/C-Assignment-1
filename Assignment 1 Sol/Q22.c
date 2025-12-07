#include <stdio.h>

int main(void) {
    int a, b;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int originalA = a;
    int originalB = b;

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    
    int gcd = a;

    int lcm = (originalA * originalB) / gcd;
    
    printf("GCD(%d, %d) = %d\n", originalA, originalB, gcd);
    printf("LCM(%d, %d) = %d\n", originalA, originalB, lcm);
    
    return 0;
}