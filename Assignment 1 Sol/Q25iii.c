#include <stdio.h>

int main(void) {
    int n,i,j;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%c", (j < i) ? ' ' : '*');
        }
        printf("\n");
    }
    
    return 0;
}
