#include <stdio.h>

int main(void) {
    int a, b, c;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    int highest = a;
    if (b > highest) highest = b;
    if (c > highest) highest = c;
    
    printf("Highest number: %d\n", highest);
    
    return 0;
}