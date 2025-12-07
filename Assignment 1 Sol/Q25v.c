#include <stdio.h>

int main(void) {
    int i,j,n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    for (i = n; i >= 1; i--) {
        for (j = 0; j < n - i; j++) {
            printf(" ");
        }
        
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("%d", j % 2);
        }
        
        printf("\n");
    }
    
    return 0;
}
