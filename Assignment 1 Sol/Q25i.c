#include <stdio.h>

int main(void) {
    int i,j,n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        for (j = i; j > 0; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    
    return 0;
}
