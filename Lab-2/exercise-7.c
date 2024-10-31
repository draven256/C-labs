#include <stdio.h>

int main(void)
{
    int n;
    int product = 1;

    printf("Enter n\n");
    scanf("%d", &n);

    for (int i = n; i > 1; i--)
    {
        product *= i;
    }

    printf("%d! is equal to %d\n", n, product);
}