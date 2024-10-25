#include <stdio.h>

int main(void)
{
    int a3, a4, a5;
    a3 = a4 = a5 = 1000;

    int terminate = 0;
    int option;
    int amount;

    while (!terminate)
    {
        printf("In stock: %d A3, %d A4, %d A5\n", a3, a4, a5);
        printf("Select:\n0) Terminate\n1) A3\n2) A4\n3) A5\n");
        scanf("%d", &option);
        switch (option)
        {
        case 0:
            terminate = 1;
            break;

        case 1:
            printf("Enter amount of a3 paper packs\n");
            scanf("%d", &amount);
            if (amount <= a3)
            {
                a3 -= amount;
            }
            else
            {
                printf("This exceeds what we have in stock! Please enter a lower amount and try again");
            }
            break;

        case 2:
            printf("Enter amount of a4 paper packs\n");
            scanf("%d", &amount);
            if (amount <= a3)
            {
                a4 -= amount;
            }
            else
            {
                printf("This exceeds what we have in stock! Please enter a lower amount and try again");
            }
            break;

        case 3:
            printf("Enter amount of a5 paper packs\n");
            scanf("%d", &amount);
            if (amount <= a3)
            {
                a5 -= amount;
            }
            else
            {
                printf("This exceeds what we have in stock!\nPlease enter a lower amount and try again\n");
            }
            break;

        default:
            printf("Invalid input. Please try again\n");
        }
    }
    printf("Total order details: %d A3, %d A4, %d A5\n", (1000 - a3), (1000 - a4), (1000 - a5));
    printf("Remaining stock: %d A3, %d A4, %d A5\n", a3, a4, a5);
}