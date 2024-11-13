#include <stdio.h>

int main(void)
{
    int pin = 99999; // for the sake of simplicity
    int pinAttempt;

    for (int i = 0; i < 5; i++){
        printf("Enter pin: ");
        scanf("%d", &pinAttempt);
        if (pinAttempt == pin) {
            printf("Success!\n");
            break;
        }
        printf("Incorrect pin. %d attempts left\n", (5-(i+1)));
        while(getchar() != '\n');
    } 
}