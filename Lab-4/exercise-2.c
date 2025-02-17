#include <stdio.h>

void fibIter(int n)
{
    int num1 = 0, num2 = 1;

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", num1);
        int temp = num2;
        num2 += num1;
        num1 = temp;
    }
}

void fibRec(int n, int i, int num1, int num2)
{
    if (i >= n)
        return;
    printf("%d\n", num1);
    fibRec(n, i + 1, num2, num1 + num2);
}

