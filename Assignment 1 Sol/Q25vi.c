#include <stdio.h>

int main(void) {
    int i,j,n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    for ( i = 0; i < 2 * n; i++) {
        int spaces = (i < n) ? i : 2 * n - i - 1;
        int numbers = (i < n) ? n - i : i - n + 1;
        
        for (j = 0; j < spaces; j++) printf(" ");
        for ( j = 1; j <= numbers; j++) printf("%d", j);
        printf("\n");
    }
    
    return 0;
}
