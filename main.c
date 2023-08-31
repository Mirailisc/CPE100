#include <stdio.h>

int main()
{
	int age;

	printf("Enter passenger's age: ");
	scanf("%d", &age);

	if (age <= 12)
	{
		printf("Give kid card to the passenger");
	}
	else if (age <= 25)
	{
		printf("Give student card to the passenger");
	}
	else if (age >= 60)
	{
		printf("Give elder card to the passenger");
	}
	else
	{
		printf("Give normal card to the passenger");
	}

	return 0;
}
