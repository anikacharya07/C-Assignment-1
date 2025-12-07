#include <stdio.h>

int main(void) {
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    int totalRows = 2 * n - 1;
    
    for (i = 0; i < totalRows; i++) {
        int rowNum = (i < n) ? i + 1 : totalRows - i;
        int spaces = n - rowNum + 1;
        
        for (j = 0; j < spaces; j++) printf(" ");
        
        for (j = n; j >= spaces; j--) printf("%d", j);
        
        for (j = spaces + 1; j <= n; j++) printf("%d", j);
        
        printf("\n");
    }
    
    return 0;
}
