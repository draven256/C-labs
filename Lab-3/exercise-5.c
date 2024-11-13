#include <stdio.h>

int main(void)
{
    int arr[20];
    int num;
    int status = 0;

    int sum = 0;

    for (int i = 0; i < 20; i++)
    {
        do
        {
            printf("Num %d/20.\nEnter a number larger than the previous one: ", i);
            status = scanf("%d", &num);
            while (getchar() != '\n')
                ;
        } while (status == 0);
        if (num < 1 || num > 100)
        {
            i--;
            continue;
        }
        for (int j = 0; j < i; j++)
        {
            if (num < arr[j])
            {
                i--;
                goto current;
            }
        }
        arr[i] = num;
        sum += num;
    current:
    }

    int count;
    int maxCount = 1;
    int modeNum = 0;

    // Mode algorithm
    for (int i = 1; i <= 100; i++)
    {
        count = 0;
        for (int j = 1; j <= 20; j++)
        {
            if (arr[j] == i)
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            modeNum = i;
        }
    }

    printf("Mean: %d\n", (sum / 20));
    if (modeNum == 0)
    {
        printf("Mode: No repeated numbers\n");
    }
    else
    {
        printf("Mode: %d with %d occurrences\n", modeNum, maxCount);
    }
    printf("Median: %.1f\n", (float)(arr[9] + arr[10]) / 2);
}