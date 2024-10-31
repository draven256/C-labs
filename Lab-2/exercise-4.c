#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void addEmployee(char employees[][4][10], int i); 
void printTable(char employees[][4][10], int length, int precision);

int main(void)
{
    // 10 employees with 4 properties of 10 chars each
    char employees[10][4][10];

    int precision;

    for (int i = 0; i < 5; i++)
    {
       addEmployee(employees, i);
    }

    printf("Enter the precision for the salary columns\n");
    while (getchar() != '\n')
        ;
    scanf("%d", &precision);

    printTable(employees, 5, precision);

    for(int i = 5; i < 10; i++){
        addEmployee(employees, i);
        printTable(employees, i+1, precision);
    }
    double totalMonthlySalary = 0;
    for(int i = 0; i < 10; i++){
        totalMonthlySalary += atof(employees[i][3]);
    }
    printf("The average monthly salary is %.2lf", (totalMonthlySalary / 10));
}

void addEmployee(char employees[][4][10], int i){
     printf("Employee %d\n", i);
        printf("Enter name\n");
        scanf("%9s", employees[i][0]);

        printf("Enter surname\n");
        /* getchar consumes chars in stdin until theres a new line (enter key enters \n in stdin).
        The buffer's previous contents are discarded */
        while (getchar() != '\n')
            ;
        scanf("%9s", employees[i][1]);

        printf("Enter age\n");
        while (getchar() != '\n')
            ;
        scanf("%9s", employees[i][2]);

        printf("Enter monthly pay\n");
        while (getchar() != '\n')
            ;
        scanf("%9s", employees[i][3]);
}

void printTable(char employees[][4][10], int length, int precision)
{
    printf("  %-9s %-9s %-9s %-15s %-15s\n", "Name", "Surname", "Age", "Monthly Pay", "13-Month Pay");
    for (int i = 0; i < length; i++)
    {
        printf("%d %-9s %-9s %-9s %-15.*lf %-15.*lf\n", i, employees[i][0], employees[i][1],
               employees[i][2], precision, atof(employees[i][3]), precision, atof(employees[i][3]) * 13);
    }
}   