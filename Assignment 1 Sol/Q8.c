#include <stdio.h>

int main(void) {
    int n,i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Multiplication table of %d:\n", n);
    printf("-------------------\n");

    // Single loop for table generation
    for ( i=1; i <= 10; i++) {
        printf("%d*%d = %d\n", n, i, n * i);
    }

    return 0;
}
