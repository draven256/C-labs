#include <stdio.h>

int main(void)
{
    long num;
    long sum = 0L; /* initialize sum to zero */
    int status;

    do
    {
        printf("Please enter an integer to be added to sum (q to quit): ");

        // scanf returns the number of items assigned to variables.
        // Assignment into variables stops when given invalid input for a certain format specifier
        status = scanf("%ld", &num);
        sum += num;

    } while (status == 1);

    printf("Those integers sum to %ld.\n", sum);

    return 0;
}
