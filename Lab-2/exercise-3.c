#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[100];
    char s2[100];
    char s3[100];

    char *strs[] = {s1, s2, s3};

    printf("Enter three words and I'll write each one backwards\n");
    scanf("%s", s1);
    scanf("%s", s2);
    scanf("%s", s3);

    for (int i = 0; i < 3; i++)
    {
        for (int j = strlen(strs[i]) - 1; j > -1; j--) printf("%c", strs[i][j]);
        printf("\n");
    }
}