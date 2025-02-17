#include <stdio.h>
#include <ctype.h>

void stringInfo(char text[])
{
    int count[256] = {0};
    int j = 0, max;

    while (text[j] != '\0')
        j++;

    for (int i = 0; i < j; i++)
    {
        if (isdigit(text[i]) != 0)
        {
            printf("String contains number/s\n");
            break;
        }
    }
    printf("String is %d characters long\n", j);
    printf("First character: %c\n", text[0]);

    // most frequent character
    max = 0;
    for (int i = 0; i < j; i++)
    {
        count[text[i]]++;
    }

    for (int i = 1; i < 256; i++)
    {
        if (count[i] > count[max])
        {
            max = i;
        }
    }
    printf("Most frequent character: %c, with %d instances\n", max, count[max]);
}
