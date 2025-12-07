#include <stdio.h>

int main(void) {
    int i,j,n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    int num = 1;
    
    for (i = 1; i <= n; i++) {
        for (j = 0; j < n - i; j++) printf(" ");
        
        for (j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
    
    return 0;
}
