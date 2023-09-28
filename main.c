#include <stdio.h>

int main()
{
	int scores[10];
	int scoreArrLength = 0, ans;

	printf("Enter student scores (type -1 to start calculation) : ");
	scanf("%d", &ans);

	if (ans == -1)
	{
		for (int i = 0; i < 10; i++)
		{
			int input;

			printf("Enter score of student %d: ", i + 1);
			scanf(" %d", &input);

			if (input == -1)
			{
				break;
			}

			else
			{
				scores[i] = input;
				scoreArrLength++;
			}
		}

		if (scoreArrLength > 0)
		{
			int min = scores[0];

			for (int i = 1; i < scoreArrLength; i++)
			{
				if (scores[i] < min)
				{
					min = scores[i];
				}
			}

			printf("The minimum score is %d.", min);
		}
	}
	else
	{
		printf("End of program. Goodbye.");
	}

	return 0;
}
