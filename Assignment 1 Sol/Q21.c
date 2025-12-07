#include <stdio.h>

int main(void) {
    char binary[100];
    
    printf("Enter a binary number: ");
    scanf("%s", binary);
    
    double decimal = 0.0;
   int i;
 int valid = 1;
    int pointFound = 0;
    int intPower = 0;
    int len = 0;
    
    for ( i = 0; binary[i] != '\0'; i++) {
        len++;
        if (binary[i] == '.') {
            if (pointFound) valid = 0;
            pointFound = 1;
            intPower = i - 1;
        }
        else if (binary[i] != '0' && binary[i] != '1') {
            valid = 0;
        }
    }
    
    if (!valid) {
        printf("Invalid binary number\n");
        return 0;
    }
    
    if (!pointFound) intPower = len - 1;
    
    double currentPower = 1.0;
    
    for (i = 0; i < intPower; i++) {
        currentPower *= 2.0;
    }
    
    for ( i = 0; i < len; i++) {
        if (binary[i] == '.') {
            currentPower = 0.5;
        } else if (binary[i] == '1') {
            decimal += currentPower;
        }
        
        if (binary[i] != '.') {
            if (currentPower >= 1.0) {
                currentPower /= 2.0;
            } else {
                currentPower /= 2.0;
            }
        }
    }
    
    printf("(%s) in binary = (", binary);
    if (decimal == (int)decimal) {
        printf("%d", (int)decimal);
    } else {
        printf("%g", decimal);
    }
    printf(") in decimal\n");
    
    return 0;
}
