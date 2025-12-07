#include <stdio.h>

int main(void) {
    int i,j,n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    for ( i = 0; i < n; i++) {
        int num = n - i;
        int count = n - i;
        
        for ( j = 0; j < i; j++) printf(" ");
        
        for ( j = 0; j < count; j++) {
            printf("%d", num);
            if (j < count - 1) printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
