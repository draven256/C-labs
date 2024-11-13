#include <stdio.h>

void finalTax(float tax, int ict);

int main(void)
{
    int ict;
    float tax = 0;
    int green;
    int salary;

    printf("Enter salary\n");
    scanf("%d", &salary);
    printf("Are you in the ICT industry?\nYes - 1\nNo - 0\n");
    scanf("%d", &ict);
    printf("Do you collect old electronic equipment for green disposal?\nYes - 1\nNo - 0\n");
    scanf("%d", &green);

    // First bracket
    if (salary > 10000)
    {
        if (green)
        {
            if (salary > 15000)
            {
                tax += (15000 * 0.18);
                salary -= 15000;
            }
            else
            {
                tax += (salary * 0.18);
                finalTax(tax, ict);
                return 0;
            }
        }
        else
        {
            tax += (10000 * 0.18);
            salary -= 10000;
        }
    }
    else
    {
        tax += (salary * 0.18);
        finalTax(tax, ict);
        return 0;
    }

    // Second Bracket
    if (salary > 8000)
    {
        tax += (8000 * 0.20);
        salary -= 8000;
    }
    else
    {
        tax += (salary * 0.20);
        finalTax(tax, ict);
        return 0;
    }

    // Third Bracket
    tax += (salary * 0.25);
    finalTax(tax, ict);

    return 0;
}

void finalTax(float tax, int ict)
{
    if (ict)
    {
        tax *= 0.95;
        printf("Total tax: %.1f", tax);
    }
    else
    {
        printf("Total tax: %.1f", tax);
    }
}