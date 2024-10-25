#include <stdio.h>

// function prototypes
double add(double num1, double num2);
double subtract(double num1, double num2);
double multiply(double num1, double num2);

int main(void)
{
    int num1 = 5;
    int num2 = 10;

    int sum = add(num1, num2);
    int mul = multiply(num1, num2);
    int sub = subtract(num1, num2);

    printf("Sum of num1 and num2 is %d\n", sum);
    printf("Sub of num1 and num2 is %d\n", sub);
    printf("Mul of num1 and num2 is %d\n", mul);
}

double add(double num1, double num2)
{
    return num1 + num2;
}

double subtract(double num1, double num2)
{
    return num1 - num2;
}

double multiply(double num1, double num2)
{
    return num1 * num2;
}