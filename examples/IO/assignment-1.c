#include <stdio.h>

int main()
{
    FILE *scores;
    FILE *stats;
    char tmpString[100];
    char fileName[100];
    int tmpInt, length = 1, sum = 0, min = 0, max = 0;
    float avg;
    int studentScores[length];

    printf("Enter a file name to load student scores: ");
    scanf("%s", fileName);

    scores = fopen(fileName, "r");
    stats = fopen("./stat.txt", "w+");

    while (fscanf(scores, "%s %d", tmpString, &tmpInt) != EOF)
    {
        printf("Student %d: %s, ", length, tmpString);
        printf("Score = %d", tmpInt);
        printf("\n");

        studentScores[length] = tmpInt;

        length++;
    }
    fclose(scores);

    for (int j = 0; j <= length - 1; j++)
    {
        sum += studentScores[j];
        min = studentScores[j];

        if (studentScores[j] > max)
        {
            max = studentScores[j];
        }
        if (studentScores[j] < min)
        {
            min = studentScores[j];
        }
    }

    avg = sum / length;

    printf("Average score is %g. \n", avg);
    printf("Minimum score is %d. \n", min);
    printf("Maximum score is %d. \n", max);

    fprintf(stats, "Average score is %g. \n", avg);
    fprintf(stats, "Minimum score is %d. \n", min);
    fprintf(stats, "Maximum score is %d. \n", max);

    printf("Save statistics in file stat.txt successfully.\n");

    printf("End of program. Goodbye.");

    return 0;
}