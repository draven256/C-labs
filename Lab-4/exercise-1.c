#include <stdio.h>

// iterative function 
// Stack has space complexity O(n)
long factIter (int n) 
{
    long ans = 1;

    for (int i = n; i > 1; i--){
        ans *= i;
    }

    return ans;
}

// Stack has space complexity O(1)
long factRec (int n)
{
    long ans;

    if (n == 1) {
        ans = 1;
    } 
    else {
        ans = n * factRec(n-1);
    }

    return ans;
}

