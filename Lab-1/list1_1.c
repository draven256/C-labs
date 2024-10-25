#include <stdio.h>

int main(void)

{

    int dogs;
    int cats;

    printf("How many dogs do you have?\n");

    scanf("%d", &dogs);

    printf("And what about cats?\n");

    scanf("%d", &cats);

    printf("So you have %d dog(s) and %d cat(s)!\n", dogs, cats);
    printf("That's a total of %d pet(s)!\n", (dogs + cats));

    return 0;
}