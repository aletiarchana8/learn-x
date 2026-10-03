#include <stdio.h>

int main()
{
    FILE *fp;
    int i;
    float marks, total = 0, average;

    fp = fopen("average_marks.txt", "w");

    if(fp == NULL)
    {
        printf("File cannot be opened\n");
        return 1;
    }

    for(i = 1; i <= 5; i++)
    {
        printf("Enter marks of student %d: ", i);
        scanf("%f", &marks);

        total = total + marks;
    }

    average = total / 5;

    fprintf(fp, "Average Marks = %.2f\n", average);

    fclose(fp);

    printf("\nAverage Marks = %.2f\n", average);
    printf("Average written to average_marks.txt\n");

    return 0;
}
