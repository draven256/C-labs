#include <stdio.h>
#include <math.h>

int main (void){
    int zeta; 
    double sum = 0; 

    printf("Enter ζ\n");
    scanf("%d", &zeta);

    for (int i = 1; i <= 10000; i++){
        sum += 1.0 / pow(i, zeta);
    }
    printf("Zeta function of ζ = %d approximates to %.2lf\n", zeta, sum);
}