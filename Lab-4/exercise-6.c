#include <stdio.h>
// math.h is not a part of the standard C library libc, so link it with -lm
#include <math.h>

void ceil_transform(double *x)
{
    *x = ceil(*x);
}

void floor_transform(double *x)
{
    *x = floor(*x);
}

void ceil_custom_transform(double *x)
{
    // if value is a whole number, it's already ceiled
    if ((int)*x != *x)
    {
        if (*x < 0)
        {
            *x = (int)(*x);
        }
        else
        {
            *x = (int)((*x) + 1);
        }
    }
}

void floor_custom_transform(double *x)
{
    if ((int)*x != *x){
        if (*x < 0){
            *x = (int)(*x - 1); 
        } else {
            *x = (int)*x;
        }
    }
}

