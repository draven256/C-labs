#include <stdio.h>

int main(void)
{
    const int WEEK = 7;

    int days;
    int totalDays = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter number of days\n");
        scanf("%d", &days);
        totalDays += days;
    }

    int weeks = totalDays / WEEK;
    int remainder = totalDays % WEEK;
    printf("You entered %d days, which is equal to %d week(s) and %d day(s)\n", totalDays, weeks, remainder);
}