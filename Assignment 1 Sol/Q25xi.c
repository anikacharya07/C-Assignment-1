#include <stdio.h>

int main(void)
{
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    int totalRows = 2 * n - 1;

    for (i = 0; i < totalRows; i++)
    {
        int rowNum = (i < n) ? i : (totalRows - 1 - i);

        for (j = 0; j < rowNum; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= n - rowNum; j++)
        {
            printf("%d", j);
        }

        for (j = n - rowNum - 1; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
