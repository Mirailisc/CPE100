#include <stdio.h>
#include <string.h>

typedef struct studentInfo
{
    char name[100];
    int score;
} studentInfo;

void insertionSort(studentInfo stdInfo[], int length)
{
    int i, j;
    studentInfo key;

    for (i = 1; i < length; i++)
    {
        key = stdInfo[i];
        j = i - 1;

        while (j >= 0 && stdInfo[j].score > key.score)
        {
            stdInfo[j + 1] = stdInfo[j];
            j = j - 1;
        }
        stdInfo[j + 1] = key;
    }
}

int main()
{
    FILE *scores;
    char tmpString[100];
    char fileName[100];
    char newName[100];
    int tmpInt, length = 1, newScore;
    studentInfo stdInfo[100];

    printf("Enter a file name to load student scores: ");
    scanf("%s", fileName);

    scores = fopen(fileName, "r");

    while (fscanf(scores, "%s %d", tmpString, &tmpInt) != EOF)
    {
        printf("Student %d: %s, ", length, tmpString);
        printf("Score = %d", tmpInt);
        printf("\n");

        strcpy(stdInfo[length - 1].name, tmpString);
        stdInfo[length - 1].score = tmpInt;

        length++;
    }
    fclose(scores);

    while (1)
    {
        printf("Enter new student name (type “END” to sort student score and end the program): ");
        scanf("%s", newName);

        if (strcmp(newName, "END") == 0)
        {
            break;
        }
        else
        {
            printf("Enter %s's score: ", newName);
            scanf("%d", &newScore);

            strcpy(stdInfo[length - 1].name, newName);
            stdInfo[length - 1].score = newScore;

            length++;
        }
    }

    length -= 1;

    insertionSort(stdInfo, length);

    for (int i = 0; i <= length - 1; i++)
    {
        printf("Student %d: %s, ", i + 1, stdInfo[i].name);
        printf("Score = %d", stdInfo[i].score);
        printf("\n");
    }

    printf("End of program. Goodbye.");

    return 0;
}