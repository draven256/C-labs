#include <stdio.h>
#include <string.h>

int main(void)
{
    int quit = 0;
    char option;
    int item;
    int quantity;

    float cost;
    float total = 0;

    char list[50][50];
    int listPointer = 0;

    char itemNames[6][20] = {"", "Milk", "Bread", "Pasta", "Steak", "Pizza"};
    float itemPrices[6] = {0, 1, 2, 0.75, 30, 10};

    do
    {
        printf("Please Select:\n"
               "1. Add items to shopping cart\n"
               "2. Show current total\n"
               "3. Check out\n"
               "4. Cancel session\n"
               "q. Quit\n");
        scanf("%c", &option);
        switch (option)
        {
        case '1':
            printf(
                "1 %s €%.2f\n"
                "2 %s €%.2f\n"
                "3 %s €%.2f\n"
                "4 %s €%.2f\n"
                "5 %s €%.2f\n",
                itemNames[1], itemPrices[1],
                itemNames[2], itemPrices[2],
                itemNames[3], itemPrices[3],
                itemNames[4], itemPrices[4],
                itemNames[5], itemPrices[5]);

            scanf("%d", &item);
            printf("Enter quantity\n");
            scanf("%d", &quantity);

            cost = itemPrices[item] * quantity;
            total += cost;
            // snprintf prints length-limited formatted output to a string
            snprintf(list[listPointer], 50, "%d %s - €%.1f", quantity, itemNames[item], cost);
            listPointer++;
            break;

            case '2': 
            printf("Current Total: €%.2f\n", total);
            break;

            case '3':
            for (int i = 0; i < listPointer; i++){
                printf("%s\n", list[i]);
            }
            printf("Total: €%.2f\n", total);
            listPointer = 0;
            total = 0;
            printf("New session\n");
            break;

            case '4':
            listPointer = 0;
            total = 0;
            printf("Shopping cart has been reset\n");
            break;

            case 'q': 
            return 0;
        }

        while(getchar() != '\n');

    } while (!quit);
    return 0;
}

