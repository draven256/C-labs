#include <stdio.h>

void reverseString(char text[], int start, int end)
{
    if (start == end || start > end)
        return;
    char temp = text[start];
    text[start] = text[end];
    text[end] = temp;

    reverseString(text, start + 1, end - 1);
}

