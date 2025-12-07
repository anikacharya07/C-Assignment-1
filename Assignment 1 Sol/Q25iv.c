#include <stdio.h>

int main(void) {
    int n,i,j;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        for (j = 0; j < n - i; j++) printf(" ");
        
        for (j = i; j > 1; j--) printf("%d", j);
        for (j = 1; j <= i; j++) printf("%d", j);
        
        printf("\n");
    }
    
    return 0;
}
