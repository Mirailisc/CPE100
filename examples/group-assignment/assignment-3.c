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

		printf("Do you want to continue (y/n)?");
		scanf(" %c", &answer);
	} while (strcmp(answer, "YES") != 0);

	printf("End of program. Goodbye.");
	return 0;
}