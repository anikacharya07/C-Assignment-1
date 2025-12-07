#include <stdio.h>

int main(void) {
    double cp, sp;

    printf("Enter Cost Price and Selling Price: ");
    scanf("%lf %lf", &cp, &sp);

    double percentage = ((sp - cp) / cp) * 100;

    if (sp > cp) {
        printf("Gain: %.2lf%%\n", percentage);
    } else if (sp < cp) {
        printf("Loss: %.2lf%%\n", -percentage);
    } else {
        printf("No profit, no loss\n");
    }

    return 0;
}
