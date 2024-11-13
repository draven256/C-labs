#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int errors = 0;

    char word[1024];

    FILE *fp;

    fp = fopen("text.txt", "r");
    int i;
    int hyphenCheck = 0;
    int shortWord = 0;

    while (fscanf(fp, " %1023s", word) == 1)
    {
        hyphenCheck = 0;
        shortWord = 0;
        if (!isupper(word[0]) && !islower(word[0]))
        {
            printf("%s does not start with a letter\n", word);
            errors++;
            if (ispunct(word[0]))
            {
                printf("First character in %s is a punctuation character\n", word);
                errors++;
            }
        }
        for (int i = 0; i <= 10; i++)
        {
            if (word[i] == '\0')
            {
                shortWord = 1;
            }
            if (word[i] == '-')
            {
                hyphenCheck = 1;
            }
        }
        for (int i = 1; word[i] != '\0'; i++)
        {
            if (isupper(word[i]))
            {
                printf("%s contains uppercase letters after the initial letter\n", word);
                errors++;
                break;
            }
        }
        if (!hyphenCheck && !shortWord)
        {
            printf("%s is longer than 10 characters and does not include a hyphen\n", word);
            errors++;
        }
    }
    // repeated spaces
    // Reset file pointer
    fclose(fp);
    fp = fopen("text.txt", "r");

   
    int c;
    int lastCharSpace = 0;
    while ((c = fgetc(fp)) != EOF)
    {
        if (c == ' ')
        {
            if (lastCharSpace)
            {
                printf("Repeated space detected\n");
                errors++;

                lastCharSpace = 0;
            }
            else
            {
                lastCharSpace = 1;
            }
        }
        else
        {
            lastCharSpace = 0;
        }
    }

     fclose(fp);

    switch (errors)
    {
    case 0:
        printf("No errors found\n");
        break;
    case 1:
        printf("1 error found\n");
        break;
    default:
        printf("%d errors found\n", errors);
    }

   
}
