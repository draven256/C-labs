#include <stdio.h>

int main(void){
    const float EURO = 0.92;

    float dollars;

    for (int i = 0; i < 10; i++){
        printf("Enter amount of US Dollars\n");
        scanf("%f", &dollars);
        printf("$%.2f is €%.2f\n", dollars, dollars * EURO);
    }
}