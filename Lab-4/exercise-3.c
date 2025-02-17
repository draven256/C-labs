#include <stdio.h>

// x > y
// If we get a remainder, and that remainder can enter into the original divisor, then 
// that's the greatest common divisor of x and y, because it can also enter the dividend
int GcdRec(int x, int y)
{
    if (y == 0) return x;
    return GcdRec(y, x % y);
}

int GcdIter(int x, int y)
{
    int temp;
    do {
        temp = y;
        y = x % y;
        x = temp;
    } while (y != 0);

    return x;
}



