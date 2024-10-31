#include <stdio.h>

int main(void)
{
    float weight;
    char value;

    int a = (float)1;

    printf("Enter your weight in pounds: \n");
    scanf("%f", &weight);

    // Platinum is $1770 / pound
    // 14.5 troy ounces in 1 pound
    value = 1770.0 * weight * 14.5;

    printf("Your weight in platinum costs $%c. \n", value);
    printf("In hex: $%x. \n", value);
    printf("In octal: $%o", value);
}

/* If value is an int, then float format specifier %f won't work because
 their binary representations are different. */

 /* If value is int, and the format specifier is %c , then it will read the 8 most significant
 bits (the first byte) since a char is a byte
 */
