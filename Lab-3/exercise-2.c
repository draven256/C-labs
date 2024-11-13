#include <stdio.h>

int main(void)
{
    int n;
    int status = 0;
    int product = 1;

    do
    {
        printf("Enter n:");
        status = scanf("%d", &n);
        while (getchar() != '\n'); // clear stdin (equivalent to fgetc(stdin))
    } while (status == 0);

    for (int i = n; i > 1; i--)
    {
        product *= i;
    }

    printf("%d! is %d", n, product);
}