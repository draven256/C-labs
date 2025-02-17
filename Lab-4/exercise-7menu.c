#include <stdio.h>

#include "exercise-1.h"
#include "exercise-2.h"
#include "exercise-3.h"
#include "exercise-4.h"
#include "exercise-4p2.h"
#include "exercise-5.h"
#include "exercise-6.h"

void show_menu(void)
{
    printf("<---Menu--->\n");
    printf("1. Iterative Factorial\n");
    printf("2. Recursive Factorial\n");

    printf("3. Iterative Fibonacci\n");
    printf("4. Recursive Fibonacci\n");

    printf("5. Iterative Greatest Common Divisor\n");
    printf("6. Recursive Greatest Common Divisor\n");

    printf("7. Decimal to Hexadecimal\n");

    printf("8. Reverse String\n");

    printf("9. String Info\n");

    printf("10. Ceil Transform\n");
    printf("11. Custom Ceil Transform\n");

    printf("12. Floor Transform\n");
    printf("13. Custom Floor Transform\n");
}

void execute_operation(int choice)
{
    int n, x, y, gcd;
    long result;
    double num;

    switch (choice)
    {
    case 1:
        printf("Enter value\n");
        scanf("%d", &n);
        result = factIter(n);

        printf("%ld\n", result);
        break;

    case 2:
        printf("Enter value\n");
        scanf("%d", &n);
        result = factRec(n);
        printf("%ld\n", result);
        break;

    case 3:
        printf("Enter value\n");
        scanf("%d", &n);
        fibRec(n, 0, 0, 1);
        break;

    case 4:
        printf("Enter value\n");
        scanf("%d", &n);
        fibIter(n);
        break;
    case 5:
        printf("Enter 2 numbers, x, and y, where x > y\n");
        scanf("%d %d", &x, &y);
        gcd = GcdRec(x, y);
        printf("%d\n", gcd);
        break;
    case 6:
        printf("Enter 2 numbers, x, and y, where x > y\n");
        scanf("%d %d", &x, &y);
        gcd = GcdIter(x, y);
        printf("%d\n", gcd);
        break;

    case 7:

        printf("Enter a number\n");
        int check = scanf("%d", &x);

        if (check == 0)
        {
            printf("Invalid input\n");
            break;
        }

        if (x < 0)
            printf("Negative numbers are not supported\n");
        if (x == 0)
            printf("0\n");
        else
        {
            decToHex(x);
            printf("\n");
        }
        break;
    case 8:
        char text[1024];
        int i = 0;

        printf("Enter a string\n");
        scanf("%s", text);

        while (text[i] != '\0')
        {
            i++;
        }
        reverseString(text, 0, i - 1);

        printf("%s\n", text);
        break;

    case 9:
        printf("Enter a string\n");
        // should use fgets to read an entire line including spaces, but problem specifies using scanf
        scanf("%1023s", text);
        stringInfo(text);
        break;

    case 10:
        printf("Enter a number\n");
        scanf("%lf", &num);
        ceil_transform(&num);
        printf("%lf\n", num);
        break;
    case 11:
        printf("Enter a number\n");
        scanf("%lf", &num);
        ceil_custom_transform(&num);
        printf("%lf\n", num);
        break;
    case 12:
        printf("Enter a number\n");
        scanf("%lf", &num);
        floor_transform(&num);
        printf("%lf\n", num);
        break;
    case 13:
        printf("Enter a number\n");
        scanf("%lf", &num);
        floor_custom_transform(&num);
        printf("%lf\n", num);
        break;
    }
}

