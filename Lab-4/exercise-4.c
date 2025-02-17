#include <stdio.h>

char hex[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

void decToHex(int dec)
{
    if (dec == 0)
    {
        return;
    }

    decToHex(dec / 16);
    printf("%c", hex[dec % 16]);
}

