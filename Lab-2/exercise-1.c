#include <stdio.h>

int main(void){
    int c;
    printf("Enter a number corresponding to an ascii character (0-255)");
    scanf("%d", &c);

    printf("The number you entered corresponds to %c\n", (char) c);
}