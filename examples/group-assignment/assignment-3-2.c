#include <stdio.h>
#include <string.h>

int main()
{
    int start, end, i, j;
    char answer[10];

    do
    {
        printf("Enter start number: ");
        scanf("%d", &start);

        printf("Enter end number: ");
        scanf("%d", &end);

        printf("\n");

        for (j = 1; j <= 5; j++)
        {
            for (i = start; i <= end; i++)
            {
                printf("%d", i * j);
                printf(" ");
            }

            printf("\n");
        }

        printf("Type AGAIN to continue or END to quit: ");
        scanf("%s", answer);
    } while (strcmp(answer, "AGAIN") == 0);

    printf("End of program. Goodbye.");
    return 0;
}