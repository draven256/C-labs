#include <stdio.h>

#include "exercise-7menu.h"

int main (void)
{
    int choice;

    show_menu();
    scanf("%d", &choice);
    execute_operation(choice);
}

